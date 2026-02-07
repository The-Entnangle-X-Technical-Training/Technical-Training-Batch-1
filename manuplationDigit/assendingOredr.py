number=int(input("enter your number :"))

lastDigit= number %10
middleDigit= number//10%10
firstDigit= number//100

if firstDigit < middleDigit and middleDigit < lastDigit:
    print(f"numbers in assending order {number}")

else:
    print("given numbers is not in assending order ")