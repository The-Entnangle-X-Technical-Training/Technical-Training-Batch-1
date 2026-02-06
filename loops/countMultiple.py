number=int(input("enter your number :"))
m=int(input("enter your number :"))
i=1
count=1
while i<=number:
    if (i%m==0):
        print(f"number {i}")
        count=count+1
    else:
        print(" ")

    i=i+1