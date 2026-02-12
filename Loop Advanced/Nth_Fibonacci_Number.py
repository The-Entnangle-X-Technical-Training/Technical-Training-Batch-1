def fibonacciSeries(number):
    fib=0
    lastFirstDigit=0
    lastSecondDigit=1
    for num in range (0, number):
        fib=lastFirstDigit+lastSecondDigit
        lastFirstDigit=lastSecondDigit
        lastSecondDigit=fib
    print("The fibonacci series is:", lastFirstDigit)
number=int(input("Enter the number: "))
fibonacciSeries(number)