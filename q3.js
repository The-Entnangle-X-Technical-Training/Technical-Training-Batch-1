// Extract First Digit of 3-Digit Number

const prompt = require('prompt-sync')();

let N = Number(prompt("Enter a 3-digit number: "));
let firstDigit = Math.floor(N / 100);

console.log("First digit =", firstDigit);
