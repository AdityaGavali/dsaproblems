#include<bits/stdc++.h>
using namespace std;
int fac(int n, vector<int>&dp){
 if(dp[n] != -1)return dp[n];
    if(n==0)return 1;
    if(n==1)return 1;
    dp[n] = n*fac(n-1,dp);
     return dp[n];
}
int main(){
    int n;
    cout<<"Enter the number : \n";
    cin>>n;
    vector<int>dp(n+1,-1);
    cout<<fac(n,dp);
}