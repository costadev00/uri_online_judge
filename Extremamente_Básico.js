const fs = require("fs");

let r = fs.readFileSync(0,"utf8");
let arr = r.split("\n");
let a = parseInt(arr[0]);
let b = parseInt(arr[1]);
console.log(`X = ${a+b}`);