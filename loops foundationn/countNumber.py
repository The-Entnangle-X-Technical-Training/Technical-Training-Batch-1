number=int(input("enter your number:  "))
count=0

while number<0:
    num=number/10
    count=count+1
    
    number=number+1
    print(num)
    print(count)

