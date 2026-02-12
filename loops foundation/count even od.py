takeNum = int(input("enter the number  "))
counteven = 0
countodd =  0
while takeNum > 0:
    digit = takeNum % 10
    if digit % 2 == 0:
        counteven = counteven + 1
    else:
        countodd = countodd + 1
    takeNum = takeNum // 10
print("The number of even digits in the number is ", counteven)
print("The number of odd digits in the number is ", countodd)   
