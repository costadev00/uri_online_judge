const fs = require("fs");
const r = fs.readFileSync(0, "utf8");
const line = r.split(" ");
let h1 = parseInt(line[0]);
let m1 = parseInt(line[1]);
let h2 = parseInt(line[2]);
let m2 = parseInt(line[3]);
let duracao = 0;
if (h1 == h2 && m1 == m2) duracao = 24 * 60;
else if (h1 == h2 && m1 < m2) duracao = m2 - m1;
else if (h1 == h2 && m1 > m2) duracao = 24 * 60 - (m1 - m2);
else if (h1 < h2 && m1 == m2) duracao = (h2 - h1) * 60;
else if (h1 < h2 && m1 < m2) duracao = (h2 - h1) * 60 + (m2 - m1);
else if (h1 < h2 && m1 > m2) duracao = (h2 - h1 - 1) * 60 + (60 - m1 + m2);
else if (h1 > h2 && m1 == m2) duracao = (24 - h1 + h2) * 60;
else if (h1 > h2 && m1 < m2) duracao = (24 - h1 + h2) * 60 + (m2 - m1);
else if (h1 > h2 && m1 > m2) duracao = (24 - h1 + h2 - 1) * 60 + (60 - m1 + m2);
console.log("O JOGO DUROU " + parseInt(duracao / 60) + " HORA(S) E " + (duracao % 60) + " MINUTO(S)");
