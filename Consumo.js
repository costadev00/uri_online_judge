const fs = require("fs");
const r = fs.readFileSync(0, "utf8");
let line = r.split("\n");
let a = parseFloat(line[0]);
let b = parseFloat(line[1]);
console.log(`${(a/b).toFixed(3)} km/l`);