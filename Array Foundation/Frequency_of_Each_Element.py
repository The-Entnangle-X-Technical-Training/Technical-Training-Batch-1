def frequencyOfEachElement():
    number=int(input("Enter the number of elements you want to store in an array:"))
    lst=[]
    newList=[]
    for num in range(0, number):
        elementsOfList=int(input("enter the elements:"))
        lst.append(elementsOfList)
   
    for i in range(0, number):
        countDuplicate=1
        if lst[i] not in newList:
            for j in range(i+1,number):
                if lst[i]==lst[j]:   
                    newList.append(lst[i])      

                    countDuplicate+=1
            print("\n")
            print("The Total Duplicate elements are ",lst[i], "-> ",countDuplicate,"times")
frequencyOfEachElement()
