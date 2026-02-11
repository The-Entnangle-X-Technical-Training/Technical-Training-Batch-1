number=int(input("Enter the number: "))
isPrime=True
for num  in range (2, number):
    if number%num==0:
        print("The nummber is divisible by the number: ", num)
        isPrime=False
        break
    
if isPrime==False:
    print("The number is not Prime!!")
else:
    print("The number is prime")
    
 
        





