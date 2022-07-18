// find max subarray sum
// so we will count the sum from starting one by one and the moment we find any negative sum, we will discard it and will start again the same process
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int currsum=0,max=0;
    for(int i=0;i<n;i++){
        currsum+=a[i];
        if(currsum>max)
            max=currsum;
        if(currsum<0)
            currsum=0;
    }
    cout<<max;
    return 0;
}

//**************************************

 int maxSubArray(vector<int>& a) {
         int sum=0,ans=INT_MIN;
        for(int i=0;i<a.size();i++)
        {
            sum+=a[i];
            ans= max(sum, ans);
              if(sum<0)
                sum=0;
        }             
        return ans;
    }
