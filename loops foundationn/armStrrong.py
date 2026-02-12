number=int(input("enter your number :"))
original=number
sum=0
while number >0:
    num1= number%10
    power= num1**3
    sum=sum+power
    number=number//10
    
if original==sum:
    print(f"number is armstrong {sum} ")

else:
    print(f"number is not armstrong {sum} ")

