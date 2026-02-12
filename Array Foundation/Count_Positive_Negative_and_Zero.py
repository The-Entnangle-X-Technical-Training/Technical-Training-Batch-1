def displayReverseElements():
    number=int(input("Enter the number of elements you want to store in an array:"))
    lst=[]
    countPositive=0
    countNegative=0
    countZero=0
    for num in range(0, number):
        elementsOfList=int(input("enter the elements:"))
        lst.append(elementsOfList)   
        if elementsOfList<0:
            countNegative+=1
        elif elementsOfList>0:
            countPositive+=1
        else:
            countZero+=1
    print("The total Positive elements in an array is:", countPositive)
    print("The total Negative elements in an array is:", countNegative)
    print("The total Zero in an array is:", countZero)
displayReverseElements()