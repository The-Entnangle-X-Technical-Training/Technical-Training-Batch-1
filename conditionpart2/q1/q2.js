const prompt = require("prompt-sync")()
let num = Number(prompt("enter num"));

if(num%2==0){
    console.log("even");
}else{
    console.log("old");
}