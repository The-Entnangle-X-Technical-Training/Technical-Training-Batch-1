days=int(input("Enter the total number of days: "))
weeks=days//7
rWeekDays=days%7
years=days//365
rYearDays=days%365
print("The days in week are: ", weeks,"week","And the remaining Days in weeks are: ", rWeekDays)
print("The days in year are: ", years,"year","And the remaining Days in years are: ", rYearDays)