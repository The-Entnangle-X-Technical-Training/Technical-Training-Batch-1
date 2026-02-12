// Alphabet, Digit, or Special Character
// Algorithm

const prompt = require('prompt-sync')();
let ch = prompt("Enter a single character: ");

if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
    console.log("Alphabet");
} 
else if (ch >= '0' && ch <= '9') {
    console.log("Digit");
} 
else {
    console.log("Special Character");
}
