dividend=int(input("Enter the dividend:"))
divisor=int(input("Enter the divisor:"))
remainder=0
while True:
    if divisor>0:
        remainder=dividend%divisor
        dividend=divisor
        divisor=remainder
    elif divisor==0:
        break

print("the GCD is:", dividend)