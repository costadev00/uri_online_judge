const fs = require("fs");
const r = fs.readFileSync(0, "utf8");
const line = r.split(" ");
const inicio = parseInt(line[0]);
const fim = parseInt(line[1]);
const duracao = fim - inicio;
if (duracao <= 0) console.log("O JOGO DUROU " + (24 + duracao) + " HORA(S)");
else console.log("O JOGO DUROU " + duracao + " HORA(S)");