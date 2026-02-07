number=int(input("enter your number :"))

lastdigit= number%10
thirdDigit=number//10%10
secondDigit= number//100%10
firstDigit= number//100

sum= firstDigit *1000 + secondDigit*100+ thirdDigit*10+ lastdigit*1
if secondDigit==0 or thirdDigit==0 or lastdigit==0:
    print("Duck number ")

elif firstDigit==0:
    print("Not a Duck Number")

else:
    print("Not a duck number ")
 