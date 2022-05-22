//to find first repeating character and return the index of it
#include<bits/stdc++.h>
using namespace std;
int leftmost_char(string s)
{
    int n=256;
    int a[n]={0};
    for(int i=0;i<s.length();i++){
        a[s[i]]++;
    }
   for(int i=0;i<s.length();i++){
        if(a[s[i]]>1)
        return  i;
} return -1;
}
int main()
{
    //geeksforgeeks  0
    string s;
    cin>>s;
    cout<<leftmost_char(s);
    return 0;}

