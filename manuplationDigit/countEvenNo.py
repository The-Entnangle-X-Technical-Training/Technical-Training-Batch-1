number= int(input("enter your numbar :"))

count=0

lastDigit = number % 10
ThirdDigit = number // 10 % 10
SecondDigit = number // 100 % 10
firstDigit = number // 1000

if firstDigit%2==0:
    count=count+1

if SecondDigit%2==0:
    count=count+1

if ThirdDigit%2==0:
    count=count+1

if lastDigit%2==0:
    count=count+1


else:
    print("there is no even number ")

print(count)