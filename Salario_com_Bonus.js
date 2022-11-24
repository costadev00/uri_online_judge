const fs = require("fs");

const r = fs.readFileSync(0, "utf8");

let line = r.split("\n");
a = line[0];
b = parseFloat(line[1]);
c = parseFloat(line[2]);
bo = c*0.15;
x = b+bo;
console.log(`TOTAL = R$ ${x.toFixed(2)}`);