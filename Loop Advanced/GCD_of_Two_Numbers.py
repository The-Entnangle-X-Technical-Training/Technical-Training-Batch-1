def GCD(dividend,divisor):
    remainder=0    
    while True:
        if divisor>0:
            remainder=dividend%divisor
            dividend=divisor
            divisor=remainder
            
        elif divisor==0:
            
            break
    
    print("The GCD of Two given number is: ", dividend)

dividend=int(input("Enter the number:"))
divisor=int(input("Enter the number:"))
GCD(dividend, divisor)

