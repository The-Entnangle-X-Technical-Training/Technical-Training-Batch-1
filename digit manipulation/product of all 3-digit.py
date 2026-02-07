Number = int(input("Enter the 3-digit number:"))
Last_Digit = Number%10
Middle_Digit = (Number//10)%10
First_Digit = Number//100
product = Last_Digit*Middle_Digit*First_Digit
print(product)