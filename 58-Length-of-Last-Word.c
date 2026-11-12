int lengthOfLastWord(char* s) {
     int length = strlen(s);
    int i = length - 1;
    int count =0;
    while(i >= 0 && s[i] == ' '){
        i--;
    }
    while(i >= 0 && s[i] != ' '){
        i--;
        count++;
    }
    return count;
}