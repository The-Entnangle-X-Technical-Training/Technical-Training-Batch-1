takeNum = int(input("Enter an 4 DIGIT NUMBER: "))
lastNum = takeNum % 10
middleNum1 = takeNum // 10 % 10
middleNum2 = takeNum // 100 % 10
firstNum = takeNum //1000



if firstNum > middleNum1 and firstNum > middleNum2 and firstNum >lastNum:
 

 print(f"the largest number is : {firstNum}")

elif middleNum1 > firstNum and middleNum1 > middleNum2 and middleNum1 > lastNum:
    print(f"the largest number is : {middleNum1}")

elif middleNum2 > firstNum and middleNum2 > middleNum1 and middleNum2 > lastNum:
    print(f"the largest number is : {middleNum2}")

elif lastNum> firstNum and lastNum > middleNum1 and lastNum > middleNum2:

    print(f"the largest number is : {lastNum}")

print(f"the first number is : {firstNum},the middle number1 is : {middleNum1},the middle number2 is : {middleNum2},the last number is : {lastNum}")
 


