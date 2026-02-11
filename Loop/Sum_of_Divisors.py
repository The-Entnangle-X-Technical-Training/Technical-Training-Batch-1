number=int(input("enter the number: "))
addition=0
for factors in range (1, number):
    if number%factors==0:
        addition+=factors
        print("The factors of the given number is: ", factors)
        
print("The sum of Divisors are: ", addition)
        
        