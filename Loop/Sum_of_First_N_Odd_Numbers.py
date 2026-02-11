number=int(input("Enter the number: "))
addition=0
for num in range (1, number+1):
    if num%2!=0:
        addition=addition + num
print(addition)