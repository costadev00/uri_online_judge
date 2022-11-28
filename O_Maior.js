const fs = require("fs");
const r = fs.readFileSync(0, "utf8");
let line = r.split(" ");
let a = parseFloat(line[0]);
let b = parseFloat(line[1]);
let c = parseFloat(line[2]);
let maior = (a+b+Math.abs(a-b))/2;
maior = (maior+c+Math.abs(maior-c))/2;
console.log(`${maior} eh o maior`);