const prompt = require('prompt-sync')();

let a = Number(prompt("Enter first number: "));
let b = Number(prompt("Enter second number: "));

console.log("Before Swapping:");
console.log("a =", a, "b =", b);

let temp = a;
a = b;
b = temp;

console.log("After Swapping:");
console.log("a =", a, "b =", b);
