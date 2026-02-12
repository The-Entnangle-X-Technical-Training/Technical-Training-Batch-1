def arithmeticProgression(a,d,Nth):
    for num in range (1,Nth+1):
        series= a+(num-1)*d
        print(series)


firstTerm=int(input("Enter the first term of the arithmetic progression: "))
commonDifference=int(input("Enter the common difference of the arithmetic progression: "))
NthTerm=int(input("Enter the Nth term of the arithmetic progression: "))

arithmeticProgression(firstTerm, commonDifference, NthTerm)