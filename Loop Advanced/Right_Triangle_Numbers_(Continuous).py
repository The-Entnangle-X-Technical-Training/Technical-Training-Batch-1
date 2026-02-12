def continousRightTriangle():
    number=int(input("Enter number: "))
    new=1
    for i in range (1,number+1):
        for j in range (1,i+1):
            print(new, end=" ")
            new+=1
        print("\n")
continousRightTriangle()