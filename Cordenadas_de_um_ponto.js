const fs = require("fs");
const r = fs.readFileSync(0,"utf-8");
const line = r.split(" ");
let x = parseFloat(line[0]);
let y = parseFloat(line[1]);


// Check if the point is at the origin
if (x === 0 && y === 0) {
  console.log("Origem");
}

// Check if the point is on one of the axes
else if (x === 0) {
  console.log("Eixo Y");
}
else if (y === 0) {
  console.log("Eixo X");
}

// Otherwise, determine which quadrant the point belongs to
else {
  if (x > 0 && y > 0) {
    console.log("Q1");
  }
  else if (x < 0 && y > 0) {
    console.log("Q2");
  }
  else if (x < 0 && y < 0) {
    console.log("Q3");
  }
  else if (x > 0 && y < 0) {
    console.log("Q4");
  }
}
