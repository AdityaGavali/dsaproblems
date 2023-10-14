#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n,k,sumf = 0 , sum = 0;
        cin>>n>>k;
        vector<ll>v(n);
        for(int i = 0;i<n;i++){
            cin>>v[i];
            sumf += v[i];
        }
        sort(v.begin(),v.end());
        ll l = 0 , r = n-1;
        while(k--){
            if(v[l]+v[l+1]>v[r]){
                sum += v[r];
                r--;
            }
            else{
                sum += v[l]+v[l+1];
                l += 2;
            }
            
        }
        cout<<sumf-sum<<endl;
    }
    return 0;
}