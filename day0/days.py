days=int(input("enter the days :"))

year= days/365
remaning_Days=days%365
weeks=remaning_Days/7
remaning_Days=remaning_Days%7
print(f"{year} {weeks} {remaning_Days}")


