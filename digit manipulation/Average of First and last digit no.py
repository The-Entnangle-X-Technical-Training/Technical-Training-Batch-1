Number = int(input("Enter 4-digit number:"))
First_Digit = Number//1000
Last_Digit = Number%10
Sum = First_Digit + Last_Digit
Average = Sum/2
print(Average)