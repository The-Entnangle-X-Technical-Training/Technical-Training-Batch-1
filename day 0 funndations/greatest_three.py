numberOne= int(input("enter first number :"))
numberTwo= int(input("enter second numner :"))
numberThree=int(input("enter third number :"))

if numberOne>numberTwo:
    if numberOne>numberThree:
        print(f"number one is greatest number {numberOne} ")

    else:
       print(f"number one {numberOne} is greater than number two {numberTwo} but less than number three {numberThree}")


elif numberTwo > numberThree:
    print(f"number Two is greatest number {numberTwo}")

else :
    print(f"number three is greatest number {numberThree}")