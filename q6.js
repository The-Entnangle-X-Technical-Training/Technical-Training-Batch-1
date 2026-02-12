// Reverse a 2-Digit Number

const prompt = require('prompt-sync')();
let N = Number(prompt("Enter number: "));
let last = N % 10;
let temp = N;

while (temp >= 10) {
  temp = Math.floor(temp / 10);
}
let first = temp;

console.log("Sum =", first + last);
