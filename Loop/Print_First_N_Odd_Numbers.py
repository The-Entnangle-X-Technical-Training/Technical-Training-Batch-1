number=int(input("Enter the number: "))
countOdd=0
for num in range (1, number+1):
    if num%2!=0:
        countOdd+=1
print("Total odd numbers are: ", countOdd)