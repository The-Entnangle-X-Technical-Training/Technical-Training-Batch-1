def fibonacciSeriesFirstNTerms(number):

    fib=0
    lastFirstDigit=0
    lastSecondDigit=1


    for num in range (0, number):
        print("fibonacci of ", num, "is:",fib)
        fib=lastFirstDigit+lastSecondDigit
        lastFirstDigit=lastSecondDigit
        lastSecondDigit=fib
number=int(input("Enter the nth term:"))
fibonacciSeriesFirstNTerms(number)

   
































# if number==0 or number==1:
#     fib=number
#     print("The number is: ", fib)
# else:
#     for num in range (0, number):
        
#         fib=lastFirstDigit+lastSecondDigit
#         lastFirstDigit=lastSecondDigit
#         lastSecondDigit=fib
#         print("fibonacci of ", num+1, "is:",lastSecondDigit)
   