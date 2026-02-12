// Problem 8: Days to Years, Weeks, Days Converter

const prompt = require('prompt-sync')();

let totalDays = Number(prompt("Enter total number of days: "));

let years = Math.floor(totalDays / 365);
totalDays = totalDays % 365;

let weeks = Math.floor(totalDays / 7);
let days = totalDays % 7;

console.log("Years =", years);
console.log("Weeks =", weeks);
console.log("Days =", days);
