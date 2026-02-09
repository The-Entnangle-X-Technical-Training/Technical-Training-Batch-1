takeNum = int(input("Enter an three-digit number: "))
lastNum = takeNum % 10
middleNum = (takeNum // 10) % 10 
firstNum = takeNum // 100
sumDigits = firstNum + middleNum + lastNum
print("The sum of digits is:", sumDigits)