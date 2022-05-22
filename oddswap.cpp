#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
   long long int t,n;
   cin>>t;
    while(t--){
        cin>>n;
        int a[n],b[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            b[i]=a[i];
        }
        sort(a,a+n);
        int index=0,last=0;
         for(int i=0;i<n;i++)
        {
            if(a[i]!=b[i]){
                index=i;
                break;
            }
        }
         for(int i=index;i<n-1;i++)
        {
            if(b[i]<b[i+1]){
                last=i;
            break;}
        }
        for(int i=0;i<index;i++)
        { cout<<b[i]<<" ";}
        int mid=(last-index+1)/2;
         for(int i=index;i<=last;i++)
        {
                if(mid!=0){
            swap(b[index],b[last]);
            mid--;}
            cout<<b[i]<<" ";
                    }
        //mid
         for(int i=last+1;i<n;i++)
        {cout<<b[i]<<" ";}
        cout<<endl;
    }


    return 0;
}
