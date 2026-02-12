def displayReverseElements():
    number=int(input("Enter the number of elements you want to store in an array:"))
    lst=[]
    count=0
    newList=[]
    for num in range(0, number):
        elementsOfList=int(input("enter the elements:"))
        lst.append(elementsOfList)

    print("\n")

    for i in range(0, number):
        countDuplicate=1
        if lst[i] not in newList:
            for j in range(i+1,number):
                if lst[i]==lst[j]:   
                    newList.append(lst[i])      

                    countDuplicate+=1
            if countDuplicate>1:
                print(lst[i],"YES")
            else:
                print(lst[i],"NO")
  
displayReverseElements()