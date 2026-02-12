def displayReverseElements():
    number=int(input("Enter the number of elements you want to store in an array:"))
    lst=[]
    productOfElements=1
    for num in range(0, number):
        elementsOfList=int(input("enter the elements:"))
        lst.append(elementsOfList)
        productOfElements*=elementsOfList
         
    print("The total product of all elements in an array is:", productOfElements)
    
displayReverseElements()