// alphabet ,digit, or special charecter

const prompt = require("prompt-sync")()

let  ch = prompt("enter the ch:")


if(ch >="a"  &&  ch <="z" || (ch >="A" && "ch")){
    console.log("alphabet")
}

else if(ch >="1" && ch<="9"){
    console.log("digit");
}
else{
    console.log("special ch");
}


