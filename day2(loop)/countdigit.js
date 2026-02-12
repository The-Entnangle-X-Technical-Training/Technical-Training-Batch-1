let n = 98;
let count = 0;

if (n === 0) count = 1;

while (n > 0) {
count++;
n = Math.floor(n / 10);
}

console.log("Digits =", count);
