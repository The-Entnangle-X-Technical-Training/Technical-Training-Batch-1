number=int(input("enter your number :"))

lastDigit= number%10
if lastDigit%2==0:
    print(f"last digit is even {lastDigit}")

else :
    print(f"last digit is odd {lastDigit}")