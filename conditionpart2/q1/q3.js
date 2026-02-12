// Problem 3: Greater of Two Numbers
const prompt = require("prompt-sync")()
let num1 = Number(prompt("enter num1:"));

let num2 = Number(prompt("enter num2:"));

if(num1 > num2){
    console.log(" num1 is greter");
}
if(num1 < num2){
    console.log("num2 is greter");
}
else{
    console.log("equal");
}