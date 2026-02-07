takeNum = int(input("Enter an four-digit number: "))
lastNum = takeNum % 10
middleNum1 = takeNum // 10 % 10
middleNum2 = takeNum // 100 % 10
firstNum = takeNum // 1000  
addition = firstNum + lastNum
average = addition / 2
print("The addition of first and last digit is:", addition)
print("The average of first and last digit is:", average)