number=int(input("enter your 3 digit number :"))

lastDigit= number%10
middleDigit=number//10 %10
firstDigit= number//100

addition=(lastDigit + firstDigit + middleDigit)
print(addition)