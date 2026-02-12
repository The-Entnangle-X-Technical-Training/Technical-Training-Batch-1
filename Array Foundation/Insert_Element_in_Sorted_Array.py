def insertElementInASortedArray():
    number=int(input("Enter the number of elements you want to store in First array:"))
    lst=[]
    
    for num in range(0, number):
        elementsOfList=int(input("enter the elements:"))
        lst.append(elementsOfList)
    newlist=[]
    element=int(input("Enter element to insert in a sorted array:"))
    
    for i in range (0,len(lst)):
        
        if lst[i]<element<lst[i+1]:
                newlist.append(element)
          
        else:
            newlist.append(lst[i])
    print(newlist)
    
insertElementInASortedArray()