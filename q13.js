// Compare First and Last Digit

const prompt = require('prompt-sync')();
let N = Number(prompt("Enter number: "));

let first = Math.floor(N / 100);
let last = N % 10;

if (first > last) console.log("First digit is greater");
else if (first < last) console.log("Last digit is greater");
else console.log("Both are equal");
