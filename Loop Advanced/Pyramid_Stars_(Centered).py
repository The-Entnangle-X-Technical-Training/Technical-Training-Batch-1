def pyramidStars():
    number=int(input("Enter number:"))
    k=1
    for i in range (1,number+1):
        for m in range(number-i, 0, -1):
            print(" ",end=" ")
        for j in range(1,k+1):
            print("*", end=" ")
            new+=1
        k=k+2
        print("\n")
       



pyramidStars()
    