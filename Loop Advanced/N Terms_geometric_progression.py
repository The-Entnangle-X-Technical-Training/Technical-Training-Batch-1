def geometricProgression():
    terms=int(input("Enter the number of terms you want: "))
    firstTerm=int(input("Enter the first term of the series: "))
    commonRatio=int(input("Enter the common ratio: "))
    for i in range(1, terms+1):
        numberOfTerms=firstTerm*(commonRatio)**(i-1)
        print("The",i,"Term:",numberOfTerms)

geometricProgression()