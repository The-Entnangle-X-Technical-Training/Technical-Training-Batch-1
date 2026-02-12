def displayReverseElements():
    number=int(input("Enter the number of elements you want to store in an array:"))
    lst=[]
    temp=0
    
    for num in range(0, number):
        elementsOfList=int(input("enter the elements:"))
        lst.append(elementsOfList)
    temp2=lst[0]
    for find in range(0, number):
        if lst[find]>temp:
            temp=lst[find]
        elif lst[find]<temp2:
            temp2=lst[find]
    print("The max number is: ", temp)
    print("The min number is: ", temp2)

    
    
displayReverseElements()