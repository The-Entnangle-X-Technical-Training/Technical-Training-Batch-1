const prompt = require('prompt-sync')();

let P = Number(prompt("Enter Principal amount: "));
let R = Number(prompt("Enter Rate of Interest: "));
let T = Number(prompt("Enter Time period: "));

let SI = (P*R*T)/100
let TOTAL = SI+P;

console.log("SI:",SI);
console.log("total:",TOTAL)