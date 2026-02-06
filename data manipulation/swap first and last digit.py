takeNum = int(input("Enter an integer: "))
lastNum = takeNum %10
middleNum = takeNum //10 %10
firstNum = takeNum //100
swappedNum = lastNum *100 + middleNum *10 + firstNum
print("The number after swapping first and last digit is:", swappedNum)