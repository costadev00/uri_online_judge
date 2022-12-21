const fs = require("fs");
const r = fs.readFileSync(0, "utf8");
const line = r.split(" ");
a = parseFloat(line[0]);
b = parseFloat(line[1]);
c = parseFloat(line[2]);
var aux=2.0;
if (a <= b) {
  if (c > b) {
    aux = a;
    a = c;
    c = a;
  } else {
    aux = a;
    a = b;
    b = a;
  }
}

if (a > b + c) console.log("NAO FORMA TRIANGULO");
else if (a * a === b * b + c * c) console.log("TRIANGULO RETANGULO");
else if (a * a > b * b + c * c) console.log("TRIANGULO OBTUSANGULO");
else if (a * a < b * b + c * c) console.log("TRIANGULO ACUTANGULO");
if (a == b && b === c) console.log("TRIANGULO EQUILATERO");
else if (a === b || b === c || a === c) console.log("TRIANGULO ISOSCELES");
