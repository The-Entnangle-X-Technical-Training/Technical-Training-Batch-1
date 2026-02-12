def rightTriangleStars():
    number=int(input("enter number: "))
    for i in range(0,number+1):
        for j in range(1,i+1):
            print("*",end=" ")
        print("\n")


rightTriangleStars()