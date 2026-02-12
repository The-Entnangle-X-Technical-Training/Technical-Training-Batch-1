//Problem 9: Seconds to Hours:Minutes:Seconds Converter
// Algorithm

const prompt = require('prompt-sync')();
let totalSec = Number(prompt("Enter total seconds: "));

let hours = Math.floor(totalSec / 3600);
let remSec = totalSec % 3600;
let minutes = Math.floor(remSec / 60);
let seconds = remSec % 60;

console.log(`Time: ${hours}h:${minutes}m:${seconds}s`);
