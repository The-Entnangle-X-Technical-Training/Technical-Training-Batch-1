let n = 10;
let m = 3;
let count = 0;
let i = 1;
while(i<=n){
        if(i%m ===0){
            count++;
        }
        i++;
}
console.log("count of multiples:", count);