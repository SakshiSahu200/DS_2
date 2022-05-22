#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int minimumSum(int num) {
        string s=to_string(num);
       sort(s.begin(),s.end());
        int x=stoi(s);
        cout<<x<<" ";
        int a=0;
        a=x%10;
        cout<<a<<" ";
        int b=0;
        b=x%100 -a;
          cout<<b<<" ";
        int c=0;
        c=x%1000 - (b) -a;
          cout<<c<<" ";
        int d=0;
        d=x/1000;
          cout<<d<<" ";
          int k=a+(10*d);
          int h=(b/10)+(c/10);
            return(k+h);
    }
int main()
{
    int num;
    cin>>num;
    cout<<minimumSum(num);
    return 0;
}
