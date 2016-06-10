//with loop and recursion
int addDigits(int num) {
    int i=0;
    int j=num/10;
    int sum=0;
    if(j==0){
        return num;
    }
    do{
        int k=num%10;
        num=num/10;
        sum=sum+k;
    }while(num!=0);
    if(sum>=10){
        int ssum=addDigits(sum);
        return ssum;
    }
    else
        return sum;
}

//with out loop and recursion
//surching digital root at wikipedia
