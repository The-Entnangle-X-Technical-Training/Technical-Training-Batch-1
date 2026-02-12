// Check if All Digits are Same

const prompt = require('prompt-sync')();
let N = Number(prompt("Enter 3-digit number: "));

let d1 = Math.floor(N / 100);
let d2 = Math.floor((N / 10) % 10);
let d3 = N % 10;

if (d1 === d2 && d2 === d3)
console.log("All digits are same");
else
 console.log("Not all digits are same");
