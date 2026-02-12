// Sum of Digits (3-Digit Number)

const prompt = require('prompt-sync')();

let N = Number(prompt("Enter a 3-digit number: "));
let d1 = N % 10;
let d2 = Math.floor(N / 10) % 10;
let d3 = Math.floor(N / 100);

let sum = d1 + d2 + d3;
console.log("Sum of digits =", sum);
