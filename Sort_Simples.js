const fs = require("fs");
const r = fs.readFileSync(0,"utf8");
let line = r.split(" ");
let n1 = parseFloat(line[0]);
let n2 = parseFloat(line[1]);
let n3 = parseFloat(line[2]);

//sort the numbers
if(n1 > n2 && n1 > n3){
    if(n2 > n3){
        console.log(n3);
        console.log(n2);
        console.log(n1);
    }else{
        console.log(n2);
        console.log(n3);
        console.log(n1);
    }
}else if(n2 > n1 && n2 > n3){
    if(n1 > n3){
        console.log(n3);
        console.log(n1);
        console.log(n2);
    }else{
        console.log(n1);
        console.log(n3);
        console.log(n2);
    }
}else if(n3 > n1 && n3 > n2){
    if(n1 > n2){
        console.log(n2);
        console.log(n1);
        console.log(n3);
    }else{
        console.log(n1);
        console.log(n2);
        console.log(n3);
    }
}
console.log("")
console.log(n1);
console.log(n2);
console.log(n3);