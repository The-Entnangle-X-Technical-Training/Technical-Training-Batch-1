year=int(input("enter the year: "))
if year%4==0 or year%100==0:
    print("The given year is Leap Year !!")
else:
    print("The given year is NOT lear year !!")