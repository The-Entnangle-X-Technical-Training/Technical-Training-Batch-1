numberOne=int(input("enter your number :"))
numberTwo=int(input("enter your number :"))
numberThree=int(input("enter your number :"))

if numberOne>numberTwo:
    if numberOne>numberThree:
        print(f"number one is greatest number {numberOne} ")

    else:
       print(f"number one {numberOne} is greater than number two {numberTwo} but less than number three {numberThree}")


elif numberTwo > numberThree:
    print(f"number Two is greatest number {numberTwo}")

else :
    print(f"number three is greatest number {numberThree}")