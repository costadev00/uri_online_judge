const fs = require("fs");
const r = fs.readFileSync(0, "utf8");
let line = r.split(" ");
let a = parseFloat(line[0]);
let b = parseFloat(line[1]);
let c = parseFloat(line[2]);
let delta = Math.pow(b, 2) - 4 * a * c;
if (delta < 0 || a === 0) {
  console.log("Impossivel calcular");
} else {
  console.log(`R1 = ${((-b + Math.sqrt(delta)) / (2 * a)).toFixed(5)}`);
  console.log(`R2 = ${((-b - Math.sqrt(delta)) / (2 * a)).toFixed(5)}`);
}
