def LCM(dividend, divisor):
    temp=dividend
    abc=divisor
    remainder=0
    while True:
        if abc>0:
            remainder=temp%abc
            temp=abc
            abc=remainder
        elif abc==0:
            break
    GCD=temp
    print("The GCD is:", GCD)
    LCM=(dividend*divisor)//GCD
    print("The LCM is: ", LCM)
dividend=int(input("Enter the number:"))
divisor=int(input("Enter the number:"))
LCM(dividend, divisor)