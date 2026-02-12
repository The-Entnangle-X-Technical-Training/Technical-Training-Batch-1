takenum = int(input("enter the number: "))
i = 1
sum = 0

while i <= takenum:
    sum = sum + (i*i)   # square
    i = i + 1

print(sum)