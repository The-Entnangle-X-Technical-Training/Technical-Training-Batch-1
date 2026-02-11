principleAmount=int(input("enter the principle amount="))
rateOfInterest=float(input("Enter the rate of interest:"))
timePeriod=float(input("Enter the time period in years:"))
simpleinterest=(principleAmount*timePeriod*rateOfInterest)/100
totalAmount=simpleinterest+principleAmount
print("The simple interest is: ", simpleinterest)
print("The new total amount is: ", totalAmount)