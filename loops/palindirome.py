number=int(input("enter your number :"))
num1=number
rev=0
while number>0:
    digit=number%10
    rev=rev*10+digit
    number=number//10

if num1==rev:
    print(f"number is palindirome {rev}")

else:
    print(f"number is not palindrome {rev} {num1}")


    