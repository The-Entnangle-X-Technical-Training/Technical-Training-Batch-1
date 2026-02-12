//simple calculator

const prompt = require('prompt-sync')();

let Num1 = Number(prompt("Enter a  number: "));
let Num2 = Number(prompt("Enter a  number: "));

let sum = Num1+Num2;
let division = Num1/Num2;
let sub = Num1-Num2;
let multiplication = Num1*Num2;;
let modulus =Num1%Num2;


console.log("sum:",sum);
console.log("sub:",sub);
console.log("division:",division);
console.log("multiplilcation:",multiplication);
console.log("modulus:",modulus);