def checkPalindrome():
    number=int(input("Enter the number of elements you want to store in an array:"))
    lst=[]
    temp=0
    for num in range(0, number):
        elementsOfList=int(input("enter the elements:"))
        lst.append(elementsOfList)

    newList=list(lst)
    
    for i in range(0, number):
        temp=newList[i]
        if i < (number-1-i):
            newList[i]=newList[number-1-i]
            newList[number-1-i]=temp
            i+=1
        elif i==(number-1-i):
                break
    print("The old array is: ", lst)
    print("The reversed array is: ",newList)

    for i in range(0,len(lst)):
        if lst[i]!=newList[i]:
            print("The list is not Palindrome !!!!")
            break
        else:
            lst[i]==newList[i]
        print("The list is Palindrome !!!!")
       
checkPalindrome()