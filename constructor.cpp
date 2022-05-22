#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class demo
{
    int a,b;
public:
    demo()    //default constructor
    {
        //a=0;
        //b=0;
        cout<<"DC"<<endl;
    }
    demo(int x,int y){     //parameterized constructor
    a=x;
    b=y;
    cout<<"PC"<<" "<<x<<" "<<b<<endl;
    }
    ~demo()
    {
        cout<<"OD"<<endl;
    }
};
int main()
{
    demo d1,d2(2,3),d3; //implicitly call
    demo d4=demo(4,5);  //explicitly call
    return 0;
}
