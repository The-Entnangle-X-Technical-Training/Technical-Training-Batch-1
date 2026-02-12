def displayReverseElements():
    number=int(input("Enter the number of elements you want to store in an array:"))
    lst=[]
    countEven=0
    countOdd=0
    for num in range(0, number):
        elementsOfList=int(input("enter the elements:"))
        lst.append(elementsOfList)   
        if elementsOfList%2==0:
            countEven+=1
        else:
            countOdd+=1
    print("The total even elements in an array is:", countEven)
    print("The total odd elements in an array is:", countOdd)
displayReverseElements()