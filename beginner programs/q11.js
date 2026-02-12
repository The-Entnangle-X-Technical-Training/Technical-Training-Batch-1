// Area of Circle
// Write a program that calculates the area of a circle by taking radius as input. Use formula: Area = π × r2
// (use π = 3.14159)


const prompt = require('prompt-sync')();
let  r = Number(prompt("Enter an radius : "));

area= 3.14159*r^2 ;
console.log(area);