const prompt = require('prompt-sync')();

let C = Number(prompt("Enter temperature in Celsius: "));

let F = (C * 9 / 5) + 32;

console.log("Temperature in Fahrenheit =", F);
