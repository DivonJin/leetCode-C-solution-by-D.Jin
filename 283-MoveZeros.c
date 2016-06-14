void moveZeroes(int* nums, int numsSize) {
    for(int i=0;i<numsSize-1;i++){
        if(*(nums+i)==0){

            int n=i,zeros=1;
            for(int k=0;k<numsSize-i-1;k++){
                if(*(nums+n+1)==0){zeros++; n++;}
                else if(*(nums+n+1)!=0){break;}
            }

            for(int m=i;m<numsSize-zeros;m++){
                    *(nums+m)=*(nums+m+zeros);
            }

            for(int k=1;k<=zeros;k++){
                *(nums+numsSize-k)=0;
            }

            numsSize=numsSize-zeros;
        }
    }
}

//another method
void moveZeroes(int* nums, int numsSize) {
    int zeros = 0;
    for(int i=0;i<numsSize;i++){
        if(*(nums+i)==0)
            zeros++;
    }
    for(int m=0;m<zeros;m++){
        for(int n=0;n<numsSize-1;n++){
            if(*(nums+n)==0){
                int temp =*(nums+n);
                *(nums+n)= *(nums+n+1);
                *(nums+n+1)=temp;
            }
        }
    }
}

//another method use too much time(use recursion to avoid continuous even numbers of 0):
void moveZeroes(int* nums, int numsSize) {
    for(int i=0;i<numsSize-1;i++){
        if(*(nums+i)==0){
            if(*(nums+i+1)!=0){
                for(int m=i;m<numsSize-1;m++){
                    *(nums+m)=*(nums+m+1);
                }
                *(nums+numsSize-1)=0;
            }
            else if(*(nums+i+1)==0){
                moveZeroes((nums+i+1), (numsSize-i-1));
                for(int m=i;m<numsSize-1;m++){
                    *(nums+m)=*(nums+m+1);
                }
                *(nums+numsSize-1)=0;
            }

        }
    }
}
