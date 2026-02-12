takeNumN = int(input("enter n number :"))
takeNumM = int(input("enter m number:  "))

i = 1
count = 0

while i <= takeNumN:
    if(i % takeNumM == 0):
        print(takeNumN)
        count =  count+1
    i = i+1