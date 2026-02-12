// Extract Middle Digit of 3-Digit Number

const prompt = require('prompt-sync')();

let N = Number(prompt("Enter a 3-digit number: "));
let middleDigit = Math.floor(N / 10) % 10;

console.log("Middle digit =", middleDigit);
