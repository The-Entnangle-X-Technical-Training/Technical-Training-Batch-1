def seriesSum(a,d,Nth):
    
    sumOfSeries= (Nth/2)*(2*a+(Nth-1)*d)
    print(sumOfSeries)


firstTerm=int(input("Enter the first term of the arithmetic progression: "))
commonDifference=int(input("Enter the common difference of the arithmetic progression: "))
NthTerm=int(input("Enter the Nth term of the arithmetic progression: "))

seriesSum(firstTerm, commonDifference, NthTerm)