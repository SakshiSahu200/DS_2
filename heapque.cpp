#include<bits/stdc++.h>
using namespace std;

    void maximumProduct(vector<int>& nums, int k) {
        long long ans=1;

        int mod=1000000007;
        priority_queue<int>pq;
        for(int i=0;i<nums.size();i++){
            pq.push(-nums[i]);
        }
        int a=0;
        for(int i=0;i<k;i++){
            a=pq.top();
            cout<<"a is "<<a<<"   ";
            pq.pop();
            pq.push(a-1);
        }
        while(pq.size()>0){
            int b=-pq.top();
            cout<<" "<<b<<endl;
            pq.pop();
            ans=ans*(b);

        }
        cout<<ans%mod;
    }

int main()
{
    int k=5;
    vector<int>nums;
    nums.push_back(0);
    nums.push_back(4);
    maximumProduct(nums, k);
    return 0;
}
