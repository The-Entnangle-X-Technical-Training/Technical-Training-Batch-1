// Vowel or Consonant

const prompt = require('prompt-sync')();
let ch = prompt("Enter a single character: ");

if ("aeiouAEIOU".includes(ch)) {
    console.log("Vowel");
} else {
    console.log("Consonant");
}
