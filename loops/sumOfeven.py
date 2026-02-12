number=int(input("enter your number :"))

i=1
sum=0

while i <= number:
    if i%2==0:
        sum=sum+i
        print(i)
        i=i+1
    
    else:
        print(" ")

