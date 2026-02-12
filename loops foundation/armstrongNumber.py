takeNum = int(input("entre a number :"))
realNum = takeNum
sum = 0

while takeNum > 0:
    digit = takeNum % 10
    num = digit ** 3
    sum = sum + num
    takeNum = takeNum // 10

if sum == realNum:
    print("this number is armstrong")
else:
    print("this number is not armstrong")