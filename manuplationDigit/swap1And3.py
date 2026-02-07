number=int(input("enter 3 digit number :"))

lastDigit=number%10
middleDigit=number//10%10
firstDigit=number//100

# both condition are true

#print(lastDigit,middleDigit,firstDigit)

reverseNum =  lastDigit *100+ middleDigit*10 +firstDigit*1
print(reverseNum)