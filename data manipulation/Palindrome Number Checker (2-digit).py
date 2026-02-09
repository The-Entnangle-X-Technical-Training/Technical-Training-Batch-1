takeNum = int(input("Enter an integer: "))
lastNum = takeNum % 10
firstNum = takeNum // 10
if firstNum == lastNum:
    print("The number is a palindrome.")
else:
    print("The number is not a palindrome.")    