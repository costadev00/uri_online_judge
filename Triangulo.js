const fs = require("fs");
const r = fs.readFileSync(0, "utf8");
const line = r.split(" ");
let a = parseFloat(line[0]);
let b = parseFloat(line[1]);
let c = parseFloat(line[2]);
if (a + b > c && a + c > b && b + c > a)
  console.log(`Perimetro = ${(a + b + c).toFixed(1)}`);
else
 console.log(`Area = ${(((a + b) * c) / 2).toFixed(1)}`);
