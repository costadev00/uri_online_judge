const fs = require("fs");

const r = fs.readFileSync(0, "utf8");

let line = r.split("\n");
a = parseFloat(line[0]);
b = parseFloat(line[1]);
a*=3.5;
b*=7.5;
x = (a+b)/11;
console.log(`MEDIA = ${x.toFixed(5)}`);