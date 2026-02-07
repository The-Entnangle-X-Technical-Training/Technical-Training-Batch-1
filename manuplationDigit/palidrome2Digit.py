number=int(input("enter your number :"))

lastDigit=number%10
firstDigit=number//10%10

if lastDigit==firstDigit:
    print("Number is  Palindrome ")

else:
    print(" no is not Palindrome")