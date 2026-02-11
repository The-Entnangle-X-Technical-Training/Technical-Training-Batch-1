while(number>0){
        digit = number % 10;
        cout<<digit<<" ";
        sum = sum + digit;
        number = number / 10;
    
    }
    cout<<sum;