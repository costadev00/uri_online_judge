const fs = require("fs");
const r = fs.readFileSync(0, "utf8");
let salar = parseFloat(r);
let reajuste = 0;
let percentual = 0;
if (salar <= 400) {
  reajuste = salar * 0.15;
  percentual = 15;
} else if (salar <= 800) {
  reajuste = salar * 0.12;
  percentual = 12;
} else if (salar <= 1200) {
  reajuste = salar * 0.1;
  percentual = 10;
} else if (salar <= 2000) {
  reajuste = salar * 0.07;
  percentual = 7;
} else {
  reajuste = salar * 0.04;
  percentual = 4;
}
console.log("Novo salario: " + (salar + reajuste).toFixed(2));
console.log("Reajuste ganho: " + reajuste.toFixed(2));
console.log("Em percentual: " + percentual + " %");
