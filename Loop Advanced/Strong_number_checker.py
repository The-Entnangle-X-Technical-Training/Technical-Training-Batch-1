def strongNumberChecker(number):
    extract=0
    newNumber=number
    factorial=1
    addition=0
    while newNumber>0:
        extract=newNumber%10
        newNumber=newNumber//10
        for i in range(extract, 0, -1):
            factorial=i*factorial
        addition=addition+factorial
        factorial=1
    print(addition)

    if addition==number:
        print("The number is Strong Number !!!")
    else:
        print("The number is NOT Strong Number !!!")
number=int(input("Enter the number: "))
strongNumberChecker(number)

