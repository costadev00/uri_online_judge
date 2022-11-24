const fs = require("fs");

const r = fs.readFileSync(0, "utf8");

let line = r.split("\n");
a = parseFloat(line[0]);
b = parseFloat(line[1]);
c = parseFloat(line[2]);
d = parseFloat(line[3]);
x = (a*b - c*d);
console.log(`DIFERENCA = ${x.toFixed(0)}`);