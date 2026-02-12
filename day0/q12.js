// Even or Odd
const prompt = require('prompt-sync')();
let N = Number(prompt("Enter a number: "));

if (N % 2 === 0) {
    console.log("Even");
} else {
    console.log("Odd");
}
