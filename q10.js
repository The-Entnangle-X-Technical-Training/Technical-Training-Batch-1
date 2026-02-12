// Find Position of Digit from Right (3-digit)
const prompt = require('prompt-sync')();
let N = Number(prompt("Enter 3-digit number: "));
let D = Number(prompt("Enter digit: "));

let d1 = Math.floor(N / 100);
let d2 = Math.floor((N / 10) % 10);
let d3 = N % 10;

if (d3 === D) console.log("Position = 1");
else if (d2 === D) console.log("Position = 2");
else if (d1 === D) console.log("Position = 3");
else console.log("Not found");
