Number = int(input("Enter the 2- digit number:"))
Last_Digit = Number%10
First_Digit = Number//10
if(Last_Digit==First_Digit):
    print("Paildrome no.")
else:
    print("Not Palidrome")    