number=int(input("Enter 3 digit no here :"))

lastDigit= number%10
middleDigit=number//10%10
firstDigit= number//100

product=(firstDigit * middleDigit * lastDigit)
print(product)