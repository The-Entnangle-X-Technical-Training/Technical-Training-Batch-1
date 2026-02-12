def GCD(dividend,divisor):
    remainder=0    
    while True:
        if divisor>0:
            remainder=dividend%divisor
            dividend=divisor
            divisor=remainder
        elif dividend==1:         
            print("The numbers are co-prime !!!")  
            break
        elif divisor==0:   
            break
    
dividend=int(input("Enter the number:"))
divisor=int(input("Enter the number:"))
GCD(dividend,divisor)