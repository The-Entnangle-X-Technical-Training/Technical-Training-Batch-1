number=int(input("enter your number :"))

lastDigit=number%10
firstDigit=number//100

if lastDigit==firstDigit:
    print("Number is  Palindrome ")

else:
    print(" no is not Palindrome")