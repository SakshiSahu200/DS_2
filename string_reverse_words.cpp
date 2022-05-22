

void reverse_words(char s[],int n)
{
    int start=0;
    for(int end=0; end<n;end++){
        if(s[end]==' '){
            reverse(s+start,s+end);
            start=end+1;
        }

    }
    reverse(s+start,s+n);
    reverse(s,s+n);

}
