def displayElements():
    number=int(input("Enter the number of elements you want to store in an array:"))
    lst=[]
    for num in range(0, number):
        elementsOfList=input("enter the elements:")
        lst.append(elementsOfList)

    for elements in lst:
        print(elements, end=", ")
displayElements()