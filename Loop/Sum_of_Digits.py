number=int(input("Enter the number: "))
countDigit=0
for num in range(1,number+1): 
    if number!=0:
        number=number//10
        countDigit+=1
print("The total digits in a number is: ", countDigit)