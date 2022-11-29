const fs = require("fs");
let r = fs.readFileSync(0,"utf8");

let input= r.split("\n");
let line1 = input[0].split(" ");
let c1 = parseInt(line1[0]);
let q1 = parseInt(line1[1]);
let v1 = parseFloat(line1[2]);
let line2 = input[1].split(" ");
let c2 = parseInt(line2[0]);
let q2 = parseInt(line2[1]);
let v2 = parseFloat(line2[2]);

let ans  = (q1*v1)+(q2*v2);
console.log("VALOR A PAGAR: R$ "+ans.toFixed(2));