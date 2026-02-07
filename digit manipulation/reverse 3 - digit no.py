Number = int(input("Enter the 3-digit number:"))
Digit3 = Number%10
Digit2 = (Number //10)% 10
Digit1 = Number//100
Reverse_number = Digit3*100+Digit2*10 +Digit1
print(Reverse_number)