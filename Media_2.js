const fs = require("fs");

const r = fs.readFileSync(0, "utf8");

let line = r.split("\n");
a = parseFloat(line[0]);
b = parseFloat(line[1]);
c = parseFloat(line[2]);
a*=2.0;
b*=3.0;
c*=5.0;
x = (a+b+c)/10;
console.log(`MEDIA = ${x.toFixed(1)}`);