#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number : \n";
    cin>>n;
    vector<int>dp(n+1,0);
    dp[0] = 1;
    for(int i = 1;i<=n;i++){
        dp[i] = i*dp[i-1];
    }
    cout<<dp[n]<<endl;
    return 0;
}