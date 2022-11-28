const fs = require("fs");
const r = fs.readFileSync(0, "utf8");
let line = r.split("\n");
let raio = parseFloat(line[0]);
var pi = 3.14159;
console.log(`VOLUME = ${((4 / 3) * pi * (raio * raio * raio)).toFixed(3)}`);
