const prompt = require('prompt-sync')();

let num = Number(prompt("Enter a  number: "));
if(num>0){
    console.log("+");
}else{
    console.log("-");
}