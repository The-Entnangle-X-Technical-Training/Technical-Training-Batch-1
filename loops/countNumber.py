number=int(input("enter your number:  "))
count=0

while number<0:
    num=number%10
    num2=number/10
    count=count+1
    print(num,num2)
    print(count)
    number=number+1