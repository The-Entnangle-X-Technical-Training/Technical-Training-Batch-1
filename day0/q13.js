// Greater of Two Numbers

const prompt = require('prompt-sync')();
let a = Number(prompt("Enter first number: "));
let b = Number(prompt("Enter second number: "));

if (a > b) {
    console.log("First number is greater");
} else if (b > a) {
    console.log("Second number is greater");
} else {
    console.log("Both numbers are equal");
}
