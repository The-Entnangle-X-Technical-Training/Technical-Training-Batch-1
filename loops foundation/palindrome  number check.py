takeNum = int(input("enter a number :"))
reverse = 0

while takeNum > 0:
  num = takeNum % 10
  reverse = reverse * 10 + num
  takeNum = takeNum // 10
  original = takeNum

if takeNum == original:
    print("this number is palimdorm ")
else:
  print("this number is not")