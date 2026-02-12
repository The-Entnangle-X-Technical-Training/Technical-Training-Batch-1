def displayReverseElements():
    number=int(input("Enter the number of elements you want to store in an array:"))
    lst=[]
    count=0
    
    for num in range(0, number):
        elementsOfList=int(input("enter the elements:"))
        lst.append(elementsOfList)

    print("\n")
    checkNum=int(input("Enter the number, you want to check in an array: "))

    for check in range(0,number):
        if lst[check] ==checkNum:
            print("The given element position is: ", check,"index")

  
displayReverseElements()