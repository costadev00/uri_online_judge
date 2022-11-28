const fs = require("fs");
const r = fs.readFileSync(0, "utf8");
let line = r.split("\n");
let tempo_gasto = parseInt(line[0]);
let velocidade_media = parseInt(line[1]);
let distancia = tempo_gasto * velocidade_media;
let litros = distancia / 12;
console.log(litros.toFixed(3));