const fs = require("fs");
const r = fs.readFileSync(0, "utf8");
let line = r.split(" ");
let a = parseInt(line[0]);
let b = parseInt(line[1]);
let c = parseInt(line[2]);
let d = parseInt(line[3]);
if (b > c && d > a && c + d > a + b && c > 0 && d > 0 && a % 2 === 0) {
  console.log("Valores aceitos");
} else {
  console.log("Valores nao aceitos");
}
