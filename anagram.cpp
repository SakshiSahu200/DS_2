#include<bits/stdc++.h>
using namespace std;
bool Is_Anagram(string &s1,string &s2)
{
    if(s1.length()!=s2.length())            // O(log n )
        return false;
    sort(s1.begin(),s1.end());
    sort(s2.begin(),s2.end());
    return (s1==s2);
}
bool is_anagram(string &s1,string &s2)
{
    if(s1.length()!=s2.length())
        return false;
        const int n=256;
        int a[n]={0};
    for(int i=0;i<s1.length();i++){
        a[s1[i]]++;
        a[s2[i]]--;
    }
     for(int i=0;i<256;i++)
            if(a[i]!=0) return false;
     return true;
}

int main()
{
    string s1,s2;

    cin>>s1>>s2;
    cout<<is_anagram(s1,s2);
    return 0;
}
