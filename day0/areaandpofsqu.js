const prompt = require('prompt-sync')();

let side = Number(prompt("Enter the side of the square: "));

let area = side * side;
let perimeter = 4 * side;

console.log("Area of Square =", area);
console.log("Perimeter of Square =", perimeter);
