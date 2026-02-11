number=int(input("Enter the number: "))
extract=0
newNumber=0
reverse=number
while reverse>0: 
    extract=reverse%10
    reverse=reverse//10
    newNumber= newNumber*10 + extract
print(newNumber)
    
if newNumber==number:
    print("The number is Palindrome !!")

else:
    print("The number is not palindrome !!")


