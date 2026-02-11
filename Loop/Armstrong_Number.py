originalNumber=int(input("Enter the number: "))
countDigit=0
newNumber=0
extract=0              
lst=[]  
number=originalNumber               
while number>0:
    extract=number%10
    number=number//10
    lst.append(extract)
    countDigit+=1
print("The total digits in a number is: ", countDigit)
for num in lst:
    newNumber=num**countDigit+newNumber
print(newNumber)
if originalNumber==newNumber:
    print("The number is Armstrong Number!!!")
else:
    print("The number is not Armstrong Number!!")
