Number = int(input("Enter 3-digit number: "))
First_Digit = Number//100
Middle_Digit = (Number//10)%10
Last_Digit = Number%10
Sum = (First_Digit+Middle_Digit+Last_Digit )
if (Sum %3 ==0):
    print("Divisible by 3")
else:
    print("Not Divisible by 3")    