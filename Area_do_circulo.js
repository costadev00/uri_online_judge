const fs = require("fs")

const r = fs.readFileSync(0, "utf8");
var n = 3.14159;
var raio = parseFloat(r[0]);
console.log(`A=${(n*(raio*raio)).toFixed(4)}`);