// Check if Number Contains Zero (3-digit)

const prompt = require('prompt-sync')();
let N = Number(prompt("Enter 3-digit number: "));

let d1 = Math.floor(N / 100);
let d2 = Math.floor((N / 10) % 10);
let d3 = N % 10;

if (d1 === 0 || d2 === 0 || d3 === 0)
console.log("Contains zero");
else
console.log("Does not contain zero");
