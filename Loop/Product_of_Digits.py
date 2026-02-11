number=int(input("Enter the number: "))
product=1
while number>0:
        product= product*(number%10)
        number=number//10

print("The product of all digits in a number is: ", product)