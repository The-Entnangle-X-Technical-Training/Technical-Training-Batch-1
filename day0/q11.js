// Positive, Negative, or Zero

const prompt = require('prompt-sync')();
let N = Number(prompt("Enter a number: "));

if (N > 0) {
    console.log("Positive");
} else if (N < 0) {
    console.log("Negative");
} else {
    console.log("Zero");
}
