takeNum = int(input("enter the the three number:"))
lastNum = takeNum % 10
middleNum = takeNum // 10 % 10  
firstNum = takeNum // 100
sum_of_number = firstNum + middleNum + lastNum
print("the sum of the number is:", sum_of_number)
if takeNum % sum_of_number == 0:
    print("the number is a harshad number")
else:
    print("the number is not a harshad number")