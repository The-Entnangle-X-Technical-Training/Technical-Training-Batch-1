// Product of All Digits

const prompt = require('prompt-sync')();

let N = Number(prompt("Enter a 3-digit number: "));

// Extract digits
let lastDigit = N % 10;
let middleDigit = Math.floor((N / 10) % 10);
let firstDigit = Math.floor(N / 100);

// Calculate product
let product = firstDigit * middleDigit * lastDigit;

console.log("Product of digits =", product);
