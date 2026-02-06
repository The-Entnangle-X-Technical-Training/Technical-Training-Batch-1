takeNum = int(input("Enter an integer: "))
lastNum = takeNum % 10
middleNum = takeNum//10 %10
firstNum = takeNum//100
reversedNum = lastNum*100 + middleNum*10 + firstNum
print("The reversed number is:", reversedNum)