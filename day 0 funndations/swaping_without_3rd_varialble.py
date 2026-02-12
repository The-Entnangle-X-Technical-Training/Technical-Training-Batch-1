numberOne=int(input("enter your number :"))
numberTwo=int(input("enter your number :"))

print(f"before swaping numberOne is {numberOne} and numberTwo is {numberTwo}")

numberOne= numberOne+numberTwo 
numberTwo= numberOne-numberTwo
numberOne= numberOne-numberTwo 

print(f"after swaping numberOne is {numberOne} and numberTwo is {numberTwo}")