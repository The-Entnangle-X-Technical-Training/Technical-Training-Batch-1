Number = int(input("Enter the number:"))
last_digit = Number%10
middle_digit = (Number //10) %10
First_digit = Number//100
sum = (First_digit+ middle_digit+ last_digit)
print(sum)