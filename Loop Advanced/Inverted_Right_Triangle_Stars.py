def invertedRightTriangleStars():
    number=int(input("Enter the number: "))
    for i in range(number, 0 ,-1):
        for j in range (1,i+1):
            print("*", end=" ")
        print("\n")


invertedRightTriangleStars()