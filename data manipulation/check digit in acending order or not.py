takeNum = int(input("enter the the three number"))
lastNum = takeNum %10
middleNum = takeNum //10 %10
firstNum= takeNum // 100

if firstNum<middleNum<lastNum:
    print ('the number is in acending order')
else:
    print('the number is not in acending order')