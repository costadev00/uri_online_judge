const fs = require("fs");
const r = fs.readFileSync(0, "utf8");
let line = r.split(" ");
let i = parseInt(line[0]);
let f = parseInt(line[1]);
if(i >= f){
    console.log("O JOGO DUROU " + (24 - i + f) + " HORA(S)");
}else{
    console.log("O JOGO DUROU " + (f - i) + " HORA(S)");
}
