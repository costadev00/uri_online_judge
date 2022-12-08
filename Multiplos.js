const fs = require("fs");
const r = fs.readFileSync(0, "utf8");

let line = r.split(" ");
let n1 = parseFloat(line[0]);
let n2 = parseFloat(line[1]);

if (n1 > n2) {
  if (n1 % n2 == 0) console.log("Sao Multiplos");
  else console.log("Nao sao Multiplos");
} else {
  if (n2 % n1 == 0) console.log("Sao Multiplos");
  else console.log("Nao sao Multiplos");
}
