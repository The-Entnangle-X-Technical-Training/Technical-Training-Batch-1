Number = int(input("Enter 4-digit number:"))
DigitOne = Number//1000
DigitTwo = (Number//100)%10
DigitThree =(Number//10)%10
DigitFour = Number%10
sum = DigitOne*1000+DigitTwo*100+DigitThree*10+DigitFour
if (DigitTwo==0 or DigitThree==0 or DigitFour==0):
    print("Duck number")
else:
    print("Not Duck number")    