digit = int(input("Enter a number: "))
product = 1
while digit > 0:
    num = digit % 10
    print (digit)
    product = product*num 
    digit = digit//10
print ( f"the product is {product}")