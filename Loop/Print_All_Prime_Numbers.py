number=int(input("Enter the number: "))

for num  in range (2, number+1):
        isPrime=1
        for check in range(2, num):
            if num%check==0:
                isPrime=0
        
        if isPrime==1:
            print(num)





        
            
    
 
        





