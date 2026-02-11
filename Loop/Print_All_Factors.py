number=int(input("enter the number: "))
for factors in range (1, number+1):
    if number%factors==0:
        print("The factors of the given number is: ", factors)
        