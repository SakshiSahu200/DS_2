#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s= "sakshi";
    cout<<s.substr(1,4)<<endl;   //SUBSTRING
    cout<<s.find("ksh")<<endl;  // output- 2 ,i.e; it will return position of substring
    int res= s.find("ksh");
    if(res==string::npos) //find till last just like h.end()
        cout<<"not found"<<endl;
    else
        cout<<"found at index "<<res<<endl;

    // ************ Lexicographical *********
    cout<<" *********** "<<endl;
    string s1= "dsf";
    string s2= "agsteg";
    s1>s2 ? cout<<s1 : cout<<s2;
    cout<<endl;
    // ------------------- Taking whole line as input
    cout<<"-----------"<<endl;
    string str;
    getline(cin,str,'#');  //can use $ (dollar sign) or any other symbol to stop in the middle
    //like here input dks#fj will output dks only
    cout<<str<<endl;
    // for loop me apan vectors jaise iterator begin end ka use krke bhi access kr skte hain
    for(char x:str) cout<<x;  //also like this
    return 0;
}
