numberOne=int(input("enter your first number :"))
numberTwo=int(input("enter your second number :"))
numberThree=int(input("enter your third number :"))

temp=numberOne
numberOne=numberThree
numberThree=numberTwo
numberTwo=temp

print(f"numberOne after swap {numberOne}")
print(f"numberTwo after swap {numberTwo}")
print(f"numberThree after swap {numberThree}")