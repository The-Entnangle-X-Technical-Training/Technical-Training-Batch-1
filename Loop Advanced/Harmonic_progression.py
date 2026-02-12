def harmonicProgression(a,d,Nth):
    
    sumOfSeries= (Nth/2)*(2*a+(Nth-1)*d)

    series= 1/sumOfSeries
    print(series)


firstTerm=int(input("Enter the first term of the arithmetic progression: "))
commonDifference=float(input("Enter the common difference of the arithmetic progression: "))
NthTerm=int(input("Enter the Nth term of the arithmetic progression: "))

harmonicProgression(firstTerm, commonDifference, NthTerm)