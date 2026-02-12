baseNum =  int(input("Enter the base number: "))
exponent = int(input("Enter the exponent: "))
result = 1
i = 1
while i <= exponent:
    result = result*baseNum
    i = i+1
print(f"{baseNum} raised to the power of {exponent} is {result}")
