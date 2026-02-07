number = int(input("enter your 4 digit number :"))

lastDigit = number % 10
ThirdDigit = number // 10 % 10
SecondDigit = number // 100 % 10
firstDigit = number // 1000

if firstDigit >= SecondDigit and firstDigit >= ThirdDigit and firstDigit >= lastDigit:
    print(f"first digit is largest number {firstDigit}")

elif SecondDigit >= firstDigit and SecondDigit >= ThirdDigit and SecondDigit >= lastDigit:
    print(f"second digit is largest {SecondDigit}")

elif ThirdDigit >= firstDigit and ThirdDigit >= SecondDigit and ThirdDigit >= lastDigit:
    print(f"third digit is largest {ThirdDigit}")

else:
    print(f"fourth digit is largest {lastDigit}")
