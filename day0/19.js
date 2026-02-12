// Smallest of Three Numbers

const prompt = require('prompt-sync')();
let a = Number(prompt("Enter first number: "));
let b = Number(prompt("Enter second number: "));
let c = Number(prompt("Enter third number: "));

let smallest;
if (a <= b && a <= c) {
    smallest = a;
} else if (b <= a && b <= c) {
    smallest = b;
} else {
    smallest = c;
}

console.log("Smallest number is", smallest);
