takeNum = int(input("enter the number :"))
i = 0
sum = 0

while i <= takeNum:
    if i % 2 == 0:
        print(i)
        sum = sum + i
    i = i + 1   # ye while ke andar hona chahiye


print(f"THE SUM OF EVEN NUMBERS IS {sum}")
