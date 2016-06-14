#define ALPHABET_SIZE 26

bool isAnagram(char* s, char* t) {
    int s_table[ALPHABET_SIZE],
        t_table[ALPHABET_SIZE];
    memset(s_table, 0, ALPHABET_SIZE * sizeof(int));
    memset(t_table, 0, ALPHABET_SIZE * sizeof(int));

    while (*s != '\0') { s_table[*(s++) - 'a'] += 1; }
    while (*t != '\0') { t_table[*(t++) - 'a'] += 1; }

    for (int i = 0; i < ALPHABET_SIZE; ++i) {
        if (s_table[i] != t_table[i]) { return false; }
    }
    return true;
}

//another method, but time out
bool isAnagram(char* s, char* t) {
    int lens = strlen(s);
    int lent = strlen(t);
    int tf = 0;
    if(lens!=lent)
        tf=1;
    for(int i=0;i<lens-1;i++){
        for(int j=0;j<lens-i;j++){
            if(s[j]>s[j+1]){char temps=s[j];s[j]=s[j+1];s[j+1]=temps;}
            if(t[j]>t[j+1]){char tempt=t[j];t[j]=t[j+1];t[j+1]=tempt;}
        }
    }
    for(int k=0;k<lens;k++){
        if(*(s+k)!=*(t+k)){tf=1;}
    }
    if(tf==1){return false;}
    else{return true;}
}
