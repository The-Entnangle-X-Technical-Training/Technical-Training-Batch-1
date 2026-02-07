number=int(input("enter 4 digit number :"))

lastDigit=number%10
firstDigit=number//1000

average=(lastDigit+firstDigit)//2
print(average)