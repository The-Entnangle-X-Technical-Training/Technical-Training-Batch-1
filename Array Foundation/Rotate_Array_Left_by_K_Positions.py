def rotatingElements():
    number=int(input("Enter the number of elements you want to store in an array:"))
    lst=[]
    temp=0
    
    #Taking the elements from user and storing them into the list
    for num in range(0, number):
        elementsOfList=int(input("enter the elements:"))
        lst.append(elementsOfList)
    print("\n")

    print("The given array is:",lst)

    print("\n")

    k=int(input("Enter the number you want to rotate the list by, k: "))

    print("\n")
    
    new=1
    #rotating the elements of list 
    for i in range (0,k):   #this loop will run by k times 
        temp=lst[0]
        #shifting elements
        for j in range (0, len(lst)):
            if new<=len(lst)-1:
                lst[j]=lst[new]
                new+=1
        new=1               #resetting the value of "new" otheriwise programe will take the old value i.e 5
        lst[len(lst)-1]=temp         #at the last index storing the value 
    print("\n")
    print("The reversed array is: ",lst)

rotatingElements()