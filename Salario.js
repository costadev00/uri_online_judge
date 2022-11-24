const fs = require("fs");

const r = fs.readFileSync(0, "utf8");

let line = r.split("\n");
a = line[0];
b = parseFloat(line[1]);
c = parseFloat(line[2]);
x = (b*c);


console.log(`SALARY = U$ ${x.toFixed(2)}`);