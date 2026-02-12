def displayReverseElements():
    number=int(input("Enter the number of elements you want to store in an array:"))
    lst=[]
    temp=0
    for num in range(0, number):
        elementsOfList=int(input("enter the elements:"))
        lst.append(elementsOfList)
    print("The given array is:",lst)

    newList=lst
    
    for i in range(0, number):
        temp=newList[i]
        if i < (number-1-i):
            newList[i]=newList[number-1-i]
            newList[number-1-i]=temp
            i+=1
        elif i==(number-1-i):
                break
    print("The reversed array is: ",newList)

displayReverseElements()