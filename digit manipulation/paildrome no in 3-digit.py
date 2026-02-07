Number = int(input("Enter 3-digit number:"))
Last_Digit = Number%10
First_Digit = Number // 100
if (Last_Digit==First_Digit):
    print("Paildrome no.")
else:
    print("Not paildrome no.")    