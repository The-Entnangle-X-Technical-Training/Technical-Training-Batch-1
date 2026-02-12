def countElementsGreaterThanAverage():
    number=int(input("Enter the number of elements you want to store in an array:"))
    lst=[]
    
    for num in range(0, number):
        elementsOfList=int(input("enter the elements:"))
        lst.append(elementsOfList)
    
    sum=0
    average=0
    count=0
    for elements in lst:
        sum+=elements
    
    average=sum/number
    print("The Average of all the elements of the list is: ", average)
    for i in lst:
        if i>average:
            count+=1
    
    print("The T    otal number of elements which are greater than average is: ", count)

    




countElementsGreaterThanAverage()