// Write a program that takes any number as input and extracts and displays the last digit of that number

const prompt = require('prompt-sync')();

let N = Number(prompt("Enter a number: "));
let lastDigit = N % 10;

console.log("Last digit =", lastDigit);
