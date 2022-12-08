const fs = require("fs");
const r = fs.readFileSync(0, "utf8");
const line  = r.split(" ");
let cod = parseInt(line[0]);
let qtd = parseInt(line[1]);
let total = 0;
switch (cod) {
    case 1:
        total = qtd * 4.00;
        break;
    case 2:
        total = qtd * 4.50;
        break;
    case 3:
        total = qtd * 5.00;
        break;
    case 4:
        total = qtd * 2.00;
        break;
    case 5:
        total = qtd * 1.50;
        break;
}
console.log("Total: R$ " + total.toFixed(2));