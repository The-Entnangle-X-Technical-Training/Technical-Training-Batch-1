number=int(input("enter your 4 digit number :"))
lastDigit = number % 10
ThirdDigit = number // 10 % 10
SecondDigit = number // 100 % 10
firstDigit = number // 1000

if firstDigit <= SecondDigit and firstDigit <= ThirdDigit and firstDigit <= lastDigit:
    print(f"first digit is smallest number {firstDigit}")

elif SecondDigit <= firstDigit and SecondDigit <= ThirdDigit and SecondDigit <= lastDigit:
    print(f"second digit is smallest {SecondDigit}")

elif ThirdDigit <= firstDigit and ThirdDigit <= SecondDigit and ThirdDigit <= lastDigit:
    print(f"third digit is smallest {ThirdDigit}")

else:
    print(f"fourth digit is smallest {lastDigit}")
