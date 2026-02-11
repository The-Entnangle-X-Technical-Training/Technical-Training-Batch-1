number=int(input("Enter the number: "))
countEven=0
for num in range (1, number+1):
    if num%2==0:
        countEven+=1
print("Total even numbers are: ", countEven)