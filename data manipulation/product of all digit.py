takeNum = int(input("Enter an four-digit number: "))
lastNum = takeNum % 10
middleNum = (takeNum // 10) % 10
middleNum2 = (takeNum // 100) % 10
firstNum = takeNum // 1000
productDigits = firstNum * middleNum2 * middleNum * lastNum
print("The product of all digits is:", productDigits)