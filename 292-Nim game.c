bool canWinNim(int n) {
    if(n<=3 && n>0){
        return true;
        }
    else if(n<0){
        return false;
        }
    else{
        if(n%4==0)
            return false;
        else
            return true;
    }
}
