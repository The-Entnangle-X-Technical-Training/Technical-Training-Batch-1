def displayReverseElements():
    number=int(input("Enter the number of elements you want to store in an array:"))
    lst=[]
    addition=0
    average=0
    for num in range(0, number):
        elementsOfList=int(input("enter the elements:"))
        lst.append(elementsOfList)
        addition+=elementsOfList        
    print("The addition of the elements of array is: ", addition)
    average=addition/number
    print("The average of all elements of an array is: ", average)
displayReverseElements()