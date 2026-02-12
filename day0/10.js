// Swap Three Numbers Cyclically

const prompt = require('prompt-sync')();
let a = Number(prompt("Enter first number (a): "));
let b = Number(prompt("Enter second number (b): "));
let c = Number(prompt("Enter third number (c): "));

console.log(`Before swap: a=${a}, b=${b}, c=${c}`);

let temp = a;
a = b;
b = c;
c = temp;

console.log(`After cyclic swap: a=${a}, b=${b}, c=${c}`);
