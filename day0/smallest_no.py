numberOne=int(input("enter first number "))
numberTwo=int(input("enter second number "))
numberThree=int(input("enter third number "))

if numberOne<numberTwo:
    if numberOne<numberThree:
        print(f"number one is smallest number {numberOne} ")

    else:
       print(f"number one {numberOne} is smaller than number two {numberTwo} but greater than number three {numberThree}")


elif numberTwo < numberThree:
    print(f"number Two is smallest number {numberTwo}")

else :
    print(f"number three is smallest number {numberThree}")