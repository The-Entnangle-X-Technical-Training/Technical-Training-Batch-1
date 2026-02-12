//percentage calculator

const prompt = require('prompt-sync')();

let math = Number(prompt("Enter a math  marks: "));let os = Number(prompt("Enter a os  marks: "));
let js = Number(prompt("Enter a js  marks: "));
let dsa = Number(prompt("Enter a dsa  marks: "));

let total = math+os+js+dsa;

let percentage = (total/500)*100;

console.log(total);
console.log(percentage);