takeNum = int(input("Enter an two-digit number: "))
lastNum = takeNum % 10
firstNum = takeNum // 10
reversedNum = lastNum * 10 + firstNum
print("The reversed number is:", reversedNum)
