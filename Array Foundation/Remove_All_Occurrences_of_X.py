def removeElements():
    number=int(input("Enter the number of elements you want to store in an array:"))
    lst=[]
    
    #Taking the elements from user and storing them into the list
    for num in range(0, number):
        elementsOfList=int(input("enter the elements:"))
        lst.append(elementsOfList)

    newList=[]
    value=int(input("Enter the number you want to remove the occurence off: "))
    for element in lst:
        if element !=value:
            newList.append(element)
    print(newList)

    
removeElements()