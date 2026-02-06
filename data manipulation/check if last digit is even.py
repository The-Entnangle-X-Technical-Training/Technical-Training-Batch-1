takeNum = int(input("Enter an three-digit number: "))
lastNum = takeNum % 10
if lastNum %2 ==0:
    print("The last digit is even.")
else:
    print("The last digit is odd.")