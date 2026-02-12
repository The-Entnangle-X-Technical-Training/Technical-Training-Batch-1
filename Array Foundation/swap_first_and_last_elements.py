def displayReverseElements():
    number=int(input("Enter the number of elements you want to store in an array:"))
    lst=[]
    temp=0
    for num in range(0, number):
        elementsOfList=int(input("enter the elements:"))
        lst.append(elementsOfList)
    print(lst)

    
    temp=lst[0]
    lst[0]=lst[number-1]
    lst[number-1]=temp
    print("After swapping the first and last element: ",lst)

displayReverseElements()