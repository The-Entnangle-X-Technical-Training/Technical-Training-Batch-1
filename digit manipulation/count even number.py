Number = int(input("Enter 4-digit number:"))
First_Digit = Number//1000
Second_Digit = (Number//100)%10
Third_Digit = (Number//10)%10
Fourth_Digit = Number%10
count=0
if (First_Digit%2==0):
    count= count+1
if (Second_Digit%2==0):
    count= count+1
if (Third_Digit%2==0):
    count= count+1
if (Fourth_Digit%2==0):
    count=count+1  
else:
    print("There is no even number") 

print(count)          

