takeNum = int(input("enter the number :"))
i = 1
sum = 0

while i <= takeNum:
    if i % 3 == 0:
        print(i)
        sum = sum + i
    i = i + 1


print(f"THE SUM OF NUMBERS DIVISIBLE BY 3 IS {sum}")