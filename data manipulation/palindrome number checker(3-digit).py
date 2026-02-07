takeNum = int(input("Enter an integer: "))
lastNum = takeNum % 10
middleNum = takeNum //10 %10
firstNum = takeNum //100
if lastNum == firstNum:
    print("The number is a palindrome.")

else:
    print("The number is not a palindrome.")