// Remove Last Digit

const prompt = require('prompt-sync')();

let N = Number(prompt("Enter a number: "));
N = Math.floor(N / 10);

console.log("After removing last digit =", N);
