#include<bits/stdc++.h>
using namespace std;
int fib(int n, vector<int>&dp){
 if(dp[n] != -1)return dp[n];
    if(n==0 ||n==1)return n;
     dp[n] = fib(n-1,dp)+fib(n-2,dp);
     return dp[n];
}
int main(){
    int n;
    cout<<"Enter the number : \n";
    cin>>n;
    vector<int>dp(n+1,-1);
    cout<<fib(n,dp);
}