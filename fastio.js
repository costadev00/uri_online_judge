var Kattio = {
	_buf: new Buffer(1 << 14),
	_bufPos: 0,
	_bufLen: 0,
	_ensure: function() {
		if (this._bufPos === this._bufLen) {
			this._bufPos = 0;
			this._bufLen = fs.readSync(0, this._buf, 0, this._buf.length, null);
		}
	},
	_isws: function(ch) {
		return ch === 32 || ch === 9 || ch === 10 || ch === 13;
	},
	_islf: function(ch) {
		return ch === 10 || ch === 13;
	},
	_peekChar: function() {
		this._ensure();
		return this._bufPos === this._bufLen ? 0 : this._buf[this._bufPos];
	},
	_skipWs: function() {
		while (this._isws(this._peekChar()))
			this._bufPos++;
	},
	_readUntil: function(stop) {
		this._ensure();
		if (this._bufPos === this._bufLen)
			throw new Error("eof");
		var start = this._bufPos;
		var before = null;
		for (;;) {
			if (this._bufPos === this._bufLen) {
				// Hit the end; need to switch buffers. Thus, stash away all we have so far
				// into the 'before' buffer.
				var len = this._bufPos - start, preLen = (before ? before.length : 0);
				var nbuf = new Buffer(len + preLen);
				if (before)
					before.copy(nbuf);
				before = nbuf;
				this._buf.copy(before, preLen, start);
				this._ensure();
				start = this._bufPos;
			}
			if (this._bufPos === this._bufLen || stop(this._buf[this._bufPos])) break;
			this._bufPos++;
		}
		if (!before)
			return this._buf.toString("utf8", start, this._bufPos);
		var after = this._buf.slice(start, this._bufPos);
		var res = new Buffer(before.length + after.length);
		before.copy(res);
		after.copy(res, before.length);
		return res.toString();
	},

	nextToken: function() {
		this._skipWs();
		return this._readUntil(this._isws);
	},

	nextLine: function() {
		var line = this._readUntil(this._islf);
		if (this._peekChar() === 13) this._bufPos++;
		if (this._peekChar() === 10) this._bufPos++;
		return line;
	},

	nextNumber: function() { return +this.nextToken(); },
	nextInt: function() { return this.nextToken()|0; }
};

// For SpiderMonkey compat
global.readline = function() {
	try {
		return Kattio.nextLine();
	} catch(e) {
		return null;
	}
};
global.print = function(x) {
	console.log(x);
};

let n = Kattio.nextNumber();
// let r = fs.readFileSync(0,"utf8");
// let n = parseFloat(r);