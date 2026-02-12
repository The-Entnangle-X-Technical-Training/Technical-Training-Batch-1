def findSecondLargestElement():
    number=int(input("Enter the number of elements you want to store in an array:"))
    lst=[]
    
    for num in range(0, number):
        elementsOfList=int(input("enter the elements:"))
        lst.append(elementsOfList)
    
    element=0
    newList=[]
    for i in range(0, len(lst)):
        if lst[i]>element:
            element=lst[i]
            newList.append(element)
    print("The Second largest element of the list is: ",newList[len(newList)-1])
   


findSecondLargestElement()