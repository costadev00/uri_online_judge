const fs = require("fs");
const r = fs.readFileSync(0, "utf8");
let line = r.split("\n");
let a = parseInt(line[0]);
let b = parseInt(line[1]);
console.log(a-b);