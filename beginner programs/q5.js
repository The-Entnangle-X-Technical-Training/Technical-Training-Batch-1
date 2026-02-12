//swap two no  using third variable

const prompt = require('prompt-sync')();

let a = Number(prompt("Enter a  number: "));
let b = Number(prompt("Enter a  number: "));

console.log("befor swap");
console.log("a:",a,"b:",b);

a= a+b;
b = a-b;
a= a-b;

console.log("after swap");
console.log("a:",a,"b:",b);