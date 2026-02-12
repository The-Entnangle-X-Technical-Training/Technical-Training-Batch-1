takeNum = int(input("enter the number:"))
count = 0 
while takeNum > 0:
    takeNum = takeNum//10
    count = count+1

print(count)