// Greatest of Three Numbers

const prompt = require('prompt-sync')();
let a = Number(prompt("Enter first number: "));
let b = Number(prompt("Enter second number: "));
let c = Number(prompt("Enter third number: "));

let greatest;
if (a >= b && a >= c) {
    greatest = a;
} else if (b >= a && b >= c) {
    greatest = b;
} else {
    greatest = c;
}

console.log("Greatest number is", greatest);
