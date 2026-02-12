def deleteElement():
    number=int(input("Enter the number of elements you want to store in First array:"))
    lst=[]
    
    #Taking the elements from user and storing them into the list
    for num in range(0, number):
        elementsOfList=int(input("enter the elements:"))
        lst.append(elementsOfList)
    
    newList=[]
    position=int(input("Enter the position to delete element: "))
    
    for i in range(0, number):
        if i!=position:
            newList.append(lst[i])
    print(newList)
deleteElement()