def mergeArray():
    number=int(input("Enter the number of elements you want to store in First array:"))
    lst=[]
    
    #Taking the elements from user and storing them into the list
    for num in range(0, number):
        elementsOfList=int(input("enter the elements:"))
        lst.append(elementsOfList)
    print("\n")
    secondList=[]
    
    number=int(input("Enter the number of elements you want to store in Second array:"))
    
    
    #Taking the elements from user and storing them into the list
    for num in range(0, number):
        elementList=int(input("enter the elements:"))
        secondList.append(elementList)

    newList=lst+secondList
    print("\n")
    print("The new merged list is: ", newList,)
    
mergeArray()