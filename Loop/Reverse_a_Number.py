number=int(input("Enter the number: "))
extract=0
newNumber=0
while number>0: 
    extract=number%10
    number=number//10
    newNumber= newNumber*10 + extract
    



print("The product of all digits in a number is: ", newNumber)