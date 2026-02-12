// Build Number from Single Digits

const prompt = require('prompt-sync')();

let d1 = Number(prompt("Enter first digit: "));
let d2 = Number(prompt("Enter second digit: "));
let d3 = Number(prompt("Enter third digit: "));

let num = (d1 * 100) + (d2 * 10) + d3;

console.log("Built number =", num);
