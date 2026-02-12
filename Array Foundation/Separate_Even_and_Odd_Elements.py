def seperateEvenOdd():
    number=int(input("Enter the number of elements you want to store in an array:"))
    lst=[]
    newList=[]
    for num in range(0, number):
        elementsOfList=int(input("enter the elements:"))
        lst.append(elementsOfList)
    print("\n")

    count=0
    for i in range(0, number):  #we are using this loop, just to get or iterate all elements of the list
        temp=lst[count]

        if temp%2==0:
            count+=1
        else:       
            for j in range(count,number):  #we are using this loop to shift all values of the list by 1 position to the left only if remainder of lst[i] is not equal to zero
                if j<len(lst)-1:
                    lst[j]=lst[j+1]
            lst[len(lst)-1]=temp
    
    print("\n")
    print("The seperated list is: ",lst) 

seperateEvenOdd()