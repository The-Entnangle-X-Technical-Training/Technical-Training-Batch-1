year=int(input("enter year here :"))

if year%4==0:
    print(f"{year} is a leap year ")

elif year % 100:
    print(f"{year} is not a leap year")

elif year %400==0:
    print(f"{year} is leap year ")

else :
    print("invalid")