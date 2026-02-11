number=int(input("Enter the number: "))
count=0
for num  in range (2, number+1):
        isPrime=1
        for check in range(2, num):
            if num%check==0:
                isPrime=0
        
        if isPrime==1:
            print("The number is:",num)
            count+=1
print("The total count of Prime Number is: ", count)





        
            
    
 
        





