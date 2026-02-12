// Sum of Even Numbers (1 to N)

let N = 20;
let sum = 0;

for (let i = 1; i <= N; i++) {
  if (i % 2 === 0) {
    sum += i;
  }
}

console.log("Sum of Even:", sum);
