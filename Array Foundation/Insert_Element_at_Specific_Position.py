def insertElements():
    number=int(input("Enter the number of elements you want to store in an array:"))
    lst=[]
    for num in range(0, number):
        elementsOfList=int(input("enter the elements:"))
        lst.append(elementsOfList)
    print("The given array is:",lst)

    newlist=[]
    position=int(input("Enter the position you want to insert element at: "))
    element=int(input("Enter the new element: "))
    for i in range (0, len(lst)):
        temp=lst[position]
        if i==position:
            newlist.append(element)
            newlist.append(temp)
        else:
            newlist.append(lst[i])
    print("The new list is: ", newlist)

insertElements()