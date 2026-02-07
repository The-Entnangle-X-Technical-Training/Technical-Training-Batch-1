Number =int(input("Enter 4-digit number:"))
Digit1 = Number//1000
Digit2 = (Number//100)%10
Digit3 = (Number//10)%10
Digit4 = Number%10
if (Digit4<Digit1 and Digit4<Digit2 and Digit4<Digit3):
    print("Smallest number:" ,Digit4)
elif(Digit3<Digit1 and Digit3<Digit2 and Digit3<Digit4):
    print("Smallest Number:",Digit3)
elif(Digit2<Digit1 and Digit2<Digit3 and Digit2<Digit4):
    print("smallest Number:",  Digit2)
elif(Digit1<Digit2 and Digit1<Digit3 and Digit1<Digit4):
    print("Smallest number:", Digit1)       