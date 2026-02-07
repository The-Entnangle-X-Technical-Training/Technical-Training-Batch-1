Number = int(input("enter 3- digit number:"))
First_Digit = Number//100
Middle_Digit = (Number//10)%10
Last_Digit = Number%10
Swap_Number = Last_Digit*100 + Middle_Digit*10 + First_Digit
print(Swap_Number)
