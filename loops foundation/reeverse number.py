takeNum = int(input("enter a number:"))
i = 0
reverse = 0
while takeNum > 0:
    rem = takeNum % 10
    reverse = reverse * 10 + rem
    takeNum = takeNum // 10 

print(reverse)