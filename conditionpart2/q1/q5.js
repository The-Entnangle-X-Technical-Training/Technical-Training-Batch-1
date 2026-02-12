// Problem 5: Vowel or Consonant
const prompt = require("prompt-sync")()
let ch = Number(prompt("enter character:"));


if ("aeiouAEIOU".includes(ch)) {
    console.log("Vowel");
} else {
    console.log("Consonant");
}


