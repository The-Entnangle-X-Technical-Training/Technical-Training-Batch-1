// Separate Number into Two Parts

const prompt = require('prompt-sync')();
let N = Number(prompt("Enter 4-digit number: "));

let firstPart = Math.floor(N / 100);
let secondPart = N % 100;

console.log("First part =", firstPart);
console.log("Second part =", secondPart);
