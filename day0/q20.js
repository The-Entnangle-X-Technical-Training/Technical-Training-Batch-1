// Triangle Type by Angles

const prompt = require('prompt-sync')();
let A = Number(prompt("Enter first angle: "));
let B = Number(prompt("Enter second angle: "));
let C = Number(prompt("Enter third angle: "));

if (A + B + C !== 180) {
    console.log("Not a valid triangle");
} else if (A < 90 && B < 90 && C < 90) {
    console.log("Acute Triangle");
} else if (A === 90 || B === 90 || C === 90) {
    console.log("Right Triangle");
} else if (A > 90 || B > 90 || C > 90) {
    console.log("Obtuse Triangle");
}
