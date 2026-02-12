const prompt = require('prompt-sync')();
let firstNumber = Number(prompt("Enter first number:"));
let secondNumber = Number(prompt("Enter second number:"));

let sumOfNumbers = firstNumber + secondNumber;

console.log("Sum =", sumOfNumbers);
