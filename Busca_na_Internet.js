const fs = require("fs")
const r = fs.readFileSync(0, "utf8");
let n = parseInt(r);
console.log(n*4);