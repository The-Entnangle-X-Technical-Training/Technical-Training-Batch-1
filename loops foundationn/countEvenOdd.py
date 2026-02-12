number=int(input("enter your number :"))

countEven=0
countOdd=0
while number>0:
    digit=number%10

    if digit%2==0:
        countEven=countEven+1
        
    else:
        countOdd=countOdd+1

    number=number//10

print(countEven, countOdd)


