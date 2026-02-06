takeNum = int(input("enter the  4 digit number:"))
firstNum =  takeNum // 1000
middleNum1 = takeNum//10 % 10

middleNum2 = takeNum//100 % 100
lastNum = takeNum % 10

if firstNum<middleNum1 and firstNum<middleNum2 and firstNum<lastNum:
    print("smallest digit is:",firstNum)
elif middleNum1<middleNum2 and middleNum1<lastNum:
    print("smallest digit is:",middleNum1)
elif middleNum2<lastNum:
    print("smallest digit is:",middleNum2)
else:
    print("smallest digit is:",lastNum)
    