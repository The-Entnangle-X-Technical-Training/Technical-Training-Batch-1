number= int(input("enter your number :"))
i=1
sum=0
while i<=number:
    num1=number%10
    sum=sum+num1
    lastDigit=number/10
    print(sum)
    i=i+1
