// Sum of Digits at Even Positions

const prompt = require('prompt-sync')();

let num = prompt("Enter a number: ");
let s = num.toString();

let len = s.length;
let sum = 0;

// right se 2nd position
if (len - 2 >= 0) sum += Number(s[len - 2]);

// right se 4th position
if (len - 4 >= 0) sum += Number(s[len - 4]);

// right se 6th position
if (len - 6 >= 0) sum += Number(s[len - 6]);

console.log("Sum of digits at even positions =", sum);
