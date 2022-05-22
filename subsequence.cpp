//to check if a string is subsequence of other
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1,s2;
    int m,n;
    cin>>m>>n;
    cin>>s1>>s2;                //TC- O(m+n)  SC- O(1)
    int j=0;
    for(int i=0;i<m && j<n;i++){
       if(s1[i]==s2[j])
            j++;}
    if(j==n)
        cout<<"yes";
    else
        cout<<"no";
    return 0;
}
bool isSubsequence(string s1,string s2,int n,int m)
{
    if(m==0)
        return true;
    if(n==0)
        return false;
    if(s1[n-1]==s2[m-1])
    return isSubsequence(s1,s2,n-1,m-1);
    else
        return isSubsequence(s1,s2,n-1,m);
}
