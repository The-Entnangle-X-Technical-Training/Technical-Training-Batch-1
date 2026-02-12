// Problem 4: Divisibility Check
const prompt = require("prompt-sync")()
let num1 = Number(prompt("enter num1:"));

let num2 = Number(prompt("enter num2:"));

if(num1 %2 !=0){
    console.log("divisible")
}
else{
    console.log("not divisible");
}