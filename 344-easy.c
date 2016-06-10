char* reverseString(char* s) {
    int l = strlen(s)-1;
    char *b=(char*)malloc(strlen(s)+1);
    for(int i=0;i<l+1;i++){
        *(b+i)=s[l-i];
    }
    *(b+l+1)='\0';
    return b;
}
