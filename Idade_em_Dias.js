const fs = require("fs");
const r = fs.readFileSync(0, "utf8");
let idade = parseInt(r);
let anos = Math.floor(idade/365);
idade %= 365;
let meses = Math.floor(idade/30);
idade %= 30;
let dias = Math.floor(idade/1);
console.log(`${anos} ano(s)`);
console.log(`${meses} mes(es)`);
console.log(`${dias} dia(s)`);