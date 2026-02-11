base=int(input("Enter the number: "))
exponent=int(input("Enter the power of the base: "))

for expo in range(1, exponent+1):
    number=base**expo
print(number)