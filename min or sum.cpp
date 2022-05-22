#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
   long long int t,n;
   cin>>t;
    while(t--){
        cin>>n;
        int a[n];
        int cnt=0;
     for(int i=0;i<n;i++){
         cin>>a[i];}
             for(int i=0;i<n;i++){
         cnt=cnt| a[i];
     }
     cout<<cnt<<endl;
    }
    return 0;
}

