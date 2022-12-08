const fs = require("fs");
const r = fs.readFileSync(0, "utf8");
let line = r.split("\n");
let notas = line[0].split(" ");
let n1 = parseFloat(notas[0]);
let n2 = parseFloat(notas[1]);
let n3 = parseFloat(notas[2]);
let n4 = parseFloat(notas[3]);
let exame = parseFloat(line[1]);


let media = (n1 * 2 + n2 * 3 + n3 * 4 + n4 * 1) / 10;
console.log("Media: " + media.toFixed(1));
if (media >= 7.0) {
  console.log("Aluno aprovado.");
} else if (media < 5.0) {
  console.log("Aluno reprovado.");
} else {
  console.log("Aluno em exame.");
//   let exame = parseFloat(line[4]);
  console.log("Nota do exame: " + exame.toFixed(1));
  media = (media + exame) / 2;
  if (media >= 5.0) {
    console.log("Aluno aprovado.");
  } else {
    console.log("Aluno reprovado.");
  }
  console.log("Media final: " + media.toFixed(1));
}
