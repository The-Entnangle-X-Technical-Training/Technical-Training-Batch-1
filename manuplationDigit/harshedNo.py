number=int(input("enter your number :"))

lastDigit= number%10
middleDigit=number//10%10
firstDigit=number//100

addition= (lastDigit+firstDigit+middleDigit)
print(addition)

if number%addition==0:
    print("Harshed Number ")

else:
    print("not a harshed number ")

