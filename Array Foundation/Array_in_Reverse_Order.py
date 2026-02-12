def displayReverseElements():
    number=int(input("Enter the number of elements you want to store in an array:"))
    lst=[]
    for num in range(0, number):
        elementsOfList=input("enter the elements:")
        lst.append(elementsOfList)

    for display in range(number-1, -1,-1):
        # print(display)
        print(lst[display])
displayReverseElements()