// Problem 1: Positive, Negative, or Zero
const prompt = require("prompt-sync")()

let  num =Number(prompt("enter the number:"))


if(num>0){
    console.log("positive")
}
else if(num<0) {
    console.log("neg");
    
}else{
    console.log("zero");
}
