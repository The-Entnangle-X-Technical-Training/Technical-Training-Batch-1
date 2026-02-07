angleOne=int(input("enter first angle :"))
angleTwo=int(input("enter second angle :"))
angleThree=int(input("enter third anlge :"))

if angleOne < 90:
    if angleTwo < 90:
        if angleThree < 90:
            print("This is acute angle triangle")

        else:
            print("This is right angle triangle ")

    else:
        print("This is obtuse angle triangle")


elif angleOne==90:
    print("This is right angle triangle")


else:
    print("This is obtuse angle triangle ")
