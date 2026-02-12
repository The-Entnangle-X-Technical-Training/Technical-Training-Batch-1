def displayReverseElements():
    number=int(input("Enter the number of elements you want to store in an array:"))
    lst=[]
    count=0
    
    for num in range(0, number):
        elementsOfList=int(input("enter the elements:"))
        lst.append(elementsOfList)
   
    isDuplicate=False
    for i in range(0, len(lst)):
        isDuplicate=False
        for j in range(i+1,len(lst)):
            if lst[i]!=lst[j]:         
                isDuplicate=False
                
            else:
                count+=1
                isDuplicate=True
                break
        if isDuplicate==False:
            print(lst[i], end=" ")
        
    print("\n")
    print("The total distinct elements are: ", len(lst)-count)  
displayReverseElements()