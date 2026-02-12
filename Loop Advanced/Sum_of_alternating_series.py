def sumOfAlternatingSeries(Nth):
    
    sumOfSeries= (1-(2*Nth+1)*(-1)**Nth)/4
    print(sumOfSeries)


NthTerm=int(input("Enter the Nth term of the arithmetic progression: "))

sumOfAlternatingSeries(NthTerm)