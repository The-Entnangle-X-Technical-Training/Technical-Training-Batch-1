Number = int(input("Enter 3-digit number:"))
Digit1 = Number//100
Digit2 = (Number//10)%10
Digit3 =  Number%10
Sum = Digit1*100+Digit2*10+Digit3
if(Digit1<Digit2 and Digit1<Digit3):
    print("Asecending order")
else:
    print("Not in Ascending order")
