const fs = require("fs");
const r = fs.readFileSync(0, "utf8");
let line = r.split("\n");
let notas = line[0].split();
let n1 = parseFloat(notas[0]);
console.log(n1+1);
