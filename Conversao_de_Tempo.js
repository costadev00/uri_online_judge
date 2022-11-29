const fs = require("fs");
let r = fs.readFileSync(0,"utf8");
let n = parseInt(r);
let h = Math.floor(n/3600);
n %= 3600;
let m = Math.floor(n/60);
n %= 60;
console.log(`${h}:${m}:${n}`);