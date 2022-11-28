const fs = require("fs");
const r = fs.readFileSync(0, "utf8");
let line = r.split("\n");
let a = parseInt(line[0]);
console.log(`${a*2} minutos`);