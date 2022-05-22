#include<bits/stdc++.h>
using namespace std;
int cnt=0;
int sod(int n){
    int sum=0;
    if(n<10) {cnt=1;
        return n;}
    while(n!=0){
        int a=n%10;
        sum+=a;
        n=n/10;
        cnt++;
    }
    return sum;
}
int main()
{
    int t,n;
    cin>>t;
    for(int j=1;j<=t;j++)
    {
        cin>>n;
        int k=sod(n);
       // int h=nod(n);
        int l=9-(k%9);
        int a=n*10+l;
        cout<<" "<<a<<" "<<endl;
        int b=l*pow(10,cnt)+n;
        cout<<" "<<b<<" "<<endl;
        cout<<"Case #"<<j<<": "<<min(a,b)<<endl;
        cnt=0;
    }
}
