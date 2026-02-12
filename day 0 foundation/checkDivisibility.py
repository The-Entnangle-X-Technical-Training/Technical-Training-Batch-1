number =int(input("enter your number :"))

lastDigit=number%10
middleDigit=number//10%10
firstDigit= number//100

sum=(lastDigit + middleDigit +firstDigit)
print(sum)

if sum%3==0:
    print("number is divisiable ")

else:
    print("number is not divisiable")