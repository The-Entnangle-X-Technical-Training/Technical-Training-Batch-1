givenNum = int(input("Enter an integer: "))
firstDigit = givenNum // 100 
lastDigit = givenNum % 10   
sumDigits = firstDigit + lastDigit
print("The first digit is:", int(firstDigit))
print("The last digit is:", lastDigit)
print("Sum of first and last digit:", sumDigits)
