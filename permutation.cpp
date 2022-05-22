#include<iostream>
#include<bits/stdc++.h>
using namespace std;
vector<vector<int>>ans;
void permute(vector<int>a, int idx)
{
    if(idx==a.size()){
        ans.push_back(a);
        return;
    }
    for(int i=idx;i<a.size();i++){
        swap(a[i],a[idx]);
        permute(a,idx+1);
        swap(a[i],a[idx]);
    }
}
bool valid(vector<int>&v){
    int n=v.size();
   for(int i=2+n;i<v.size();i++){
    if(v[i-1]+v[i-2]==v[i])
        return false;
   }
   return true;
}
int32_t main()
{
    int n,t;
    cin>>t;
    while(t--){
     cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++)
        a.push_back(i);
    /*
    do{
        ans.push_back(a);
    } while(next_permutation(a.begin(),a.end())); /*/
    permute(a,n);
    int cnt=n;
    for(auto v: ans){
            if(valid(v)==true &&cnt!=0){
        for(auto i: v){
                if(i==0) continue;
        else
            cout<<i<<" ";}
            cnt--;
            cout<<endl;}
    }
    }
    return 0;
}
