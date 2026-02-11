number= int(input("Enter the number: "))
checkMultiple=int(input("Enter the number you to want check multiple of: "))
countMultiple=0
for num in range (1, number+1):

    if num%checkMultiple==0:
        print(f"the number is muliple of {number}= ", num)
        countMultiple+=1

print("Total multiples are: ", countMultiple)