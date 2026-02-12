//celiuse  to fahrenheit convertwer
const prompt = require('prompt-sync')();

let c = Number(prompt("Enter a  number celuse: "));

let f = (c*9/5)+32;

console.log("fahrenheit:",f);