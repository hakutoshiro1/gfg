#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    long long solve(int N, int K, vector<long long> GeekNum) {
        vector<long long>dp(N,-1);
        for(int i=0;i<GeekNum.size();i++)dp[i]=GeekNum[i];
        x(N,K,dp);
        return dp[N-1];
    }
     long long x(int n,int k,vector <long long> &dp)
    {
        if(dp[n-1]>=0)return dp[n-1];
        dp[n-1]=0;
        for(int i=1;i<k+1&&i<=n;i++)
        {
            // cout<<x(n-i,k,dp)<<endl;
            dp[n-1]+=x(n-i,k,dp);
        }
        return dp[n-1];
    }
};