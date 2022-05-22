#include<bits/stdc++.h>
using namespace std;
   vector<string> cellsInRange(string s) {
       char S_char= s[0];
        char E_char= s[3];
       int S_int= stoi(s[1]);
      int E_int= stoi(s[4]);
        vector<string>str;
        string k="";
        cout<<S_char;
        str.push_back(S_char + 'S_int');
       /* for(char i='S_char';i<='E_char';i++){
            for(char j=S_int;j<=E_int;j++){
                k= i + 'j';
            str.push_back(k);
        }} */
int main(){
    string s;
    cin>>s;
    vector<string>v;
    v=cellsInRange(s);
    for(auto x:v)
        cout<<x<<" ";
    return 0;
}

        return str;
    }
