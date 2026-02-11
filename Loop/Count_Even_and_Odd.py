number=int(input("Enter the number: "))
countEven=0
countOdd=0
for num in range (1, number+1):
    if num%2==0:
        countEven+=1
    else:
        countOdd+=1
print("Total even numbers are: ", countEven)
print("Total even numbers are: ", countOdd)
