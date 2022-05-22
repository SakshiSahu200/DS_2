#include<iostream>
using namespace std;

int main()
{
    int a,b;
    void swapk(int &,int &);
    cin>>a>>b;
    swapk(a,b);
    cout<<a<<" "<<b;
    return 0;
}
void swapk(int &x,int &y)
{
    int temp;
    temp=x;
    x=y;
    y=temp;
}
