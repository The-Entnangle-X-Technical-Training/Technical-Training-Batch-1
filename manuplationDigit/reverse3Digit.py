number=int(input("enter your 3 digit number :"))

digitThree= number%10
digitTwo= number//10%10
digitFirst= number//100

reverse= digitThree *100+digitTwo*10+digitFirst*1
print(reverse)