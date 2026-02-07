takeNum = int(input("Enter a number: "))
lastNum = takeNum / 10
middleNum = takeNum //10 %10
firstNum = takeNum //100

sum = firstNum + middleNum + lastNum

if sum % 3 == 0:
    print("The sum of digits is:", sum)

else:
    print("not divisible by 3")


