number=int(input("Enter the number: "))
fact=1
for num in range(number, 0, -1):
    fact*=num
print(fact)
