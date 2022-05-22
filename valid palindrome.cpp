#include<bits/stdc++.h>
using namespace std;

     bool findValidP(string s)
    {
        string s1=s;
        reverse(s.begin(),s.end());
        return s==s1;
    }
    bool validPalindrome(string s) {

        int n=s.length();
        cout<<n<<" ";
        if(n==0 || n==1) return true;
        if(n%2==1){
            string s1=s.substr(0,(n/2));
            cout<<s1<<" ";
            string s2=s.substr((n/2)+1,n/2);
            cout<<s2<<" ";
            return findValidP(s1+s2);
        }
        else
        {
            string s1=s.substr(0,(n/2)-1);
            string s2= s.substr((n/2),n/2);
             string s3=s.substr(0,n/2);
            string s4= s.substr(((n-1)/2)+1,n/2);
            return findValidP(s1+s2) or findValidP(s3+s4);
        }
    }
    int main()
{

    string s;
    cin>>s;
    cout<<validPalindrome(s);
    return 0;
}

