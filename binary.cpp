#include<bits/stdc++.h>
using namespace std;
    string bin(unsigned n)
{   string s="";
    for(int i=0; n>0; i++)
    {
    s+=to_string(n%2);
    n= n/2;
    }
    reverse(s.begin(),s.end());
 return s;
}

 int minBitFlips(int start, int goal) {

       // int k= a&b;
      // cout<<a<<" "<<b<<" "<<endl;
        int cnt=0;
        string s1= bin(start);
         string s2=bin(goal);
        //    cout<<s1<<" "<<s2<<" "<<endl;
        int m=s1.length();
        int n=s2.length();
            //cout<<m<< " "<<n<<" "<<endl;
        while(m!=n){

            if(m>n)
                s2= '0'+s2;
            else
                 s1= '0'+s1;
         m=s1.length();
         n=s2.length();
        }
      // cout<<s1<<" "<<s2<<" ";
        for(int i=0;i<m;i++){
            if(s1[i]==s2[i])
                cnt++;
        }
        return m-cnt;
    }
int main()
{
    int a,b;
    cin>>a>>b;
    cout<<minBitFlips(a,b);
    return 0;
}


