Number = int(input("Enter the 3-digit number:"))
Digitone = Number//100
DigitTwo = (Number//10)%10
DigitThree = Number%10
Sum = (DigitTwo+Digitone+DigitThree)
if (Number%Sum==0):
    print("Harshad number")
else:
    print("Not Harshad number")    