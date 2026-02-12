number=int(input("enter your number :"))

original=number

sum=0
while number> 0:
    digit=number%10
    fact=1
    i=1
    while i<= digit:
        
        fact=fact *i
        i=i+1
    sum=sum+fact
    number=number//10

if sum==original:
    print("strong number ")

else :
    print("not")



