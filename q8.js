// Count Even vs Odd Digits (3-Digit Number)
const prompt = require('prompt-sync')();

let N = Number(prompt("Enter a 3-digit number: "));

// Extract digits
let lastDigit = N % 10;
let middleDigit = Math.floor((N / 10) % 10);
let firstDigit = Math.floor(N / 100);

let evenCount = 0;
let oddCount = 0;

// Check first digit
if (firstDigit % 2 === 0) evenCount++;
else oddCount++;

// Check middle digit
if (middleDigit % 2 === 0) evenCount++;
else oddCount++;

// Check last digit
if (lastDigit % 2 === 0) evenCount++;
else oddCount++;

console.log("Even digits count =", evenCount);
console.log("Odd digits count =", oddCount);
