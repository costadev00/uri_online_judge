const fs = require("fs");

const r = fs.readFileSync(0, "utf8");

let line = r.split("\n");
a = parseInt(line[0]);
b = parseInt(line[1]);
console.log(`PROD = ${a*b}`);