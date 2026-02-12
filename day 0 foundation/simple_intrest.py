principal=int(input("enter the principal amount :"))
time=int(input("enter the time :"))
rate=int(input("enter the rate :"))

simple_Interest=(principal*time*rate)/100
print(f"simple interest is {simple_Interest}")

total_Amount=(principal+simple_Interest)
print(f"total amount is {total_Amount}")