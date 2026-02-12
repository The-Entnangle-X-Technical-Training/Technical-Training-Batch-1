// Problem 7: Swap Two Numbers Without Third Variable
// Write a program that takes two numbers as input, swaps them without using any third variable (use
// arithmetic operations), and displays values before and after swapping.

const prompt = require('prompt-sync')();

let a = Number(prompt("Enter first number: "));
let b = Number(prompt("Enter second number: "));

console.log("Before Swapping:");
console.log("a =", a, "b =", b);

a = a + b;
b = a - b;
a = a - b;

console.log("After Swapping:");
console.log("a =", a, "b =", b);
