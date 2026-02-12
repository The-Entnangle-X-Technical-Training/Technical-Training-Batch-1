// Leap Year Checker
const prompt = require('prompt-sync')();
let year = Number(prompt("Enter a year: "));

if ((year % 4 === 0) && ((year % 100 !== 0) || (year % 400 === 0))) {
    console.log("Leap Year");
} else {
    console.log("Not Leap Year");
}
