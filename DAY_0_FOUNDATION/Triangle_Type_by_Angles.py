Angle1=int(input("Enter the first angle: "))
Angle2=int(input("Enter the second angle: "))
Angle3=int(input("Enter the third angle: "))
if Angle1>0 and Angle1>0 and Angle3>0:
    if Angle1<90 and Angle2<90 and Angle3<90:
        print("The angle is Acute !!")
    elif Angle1>90 or Angle2>90 or Angle3>90:
        print("The angle is Obtuse !!")
    else:
        print("The angle is Right Angle !!")
else:
    print("Angles are not valid !!")