// Problem 7: Uppercase or Lowercase

const prompt = require('prompt-sync')();
let ch = prompt("Enter a single alphabet: ");

if (ch >= 'A' && ch <= 'Z') {
    console.log("Uppercase");
} else if (ch >= 'a' && ch <= 'z') {
    console.log("Lowercase");
} else {
    console.log("Not an alphabet");
}