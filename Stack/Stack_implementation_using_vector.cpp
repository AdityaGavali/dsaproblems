#include<bits/stdc++.h>
using namespace std;
//operations of stack : push, pop,  element at the top , emppty or not , size of stack
void insert(vector<int>&v,int k){
   v.push_back(k);
}
void pop(vector<int>&v){
    int k = v[v.size()-1];
    v.pop_back();
    cout<<"Poped element : "<<k<<endl;
}
int main(){
vector<int>v;
int k;
cin>>k;
insert(v,k);
pop(v);
insert(v,2);
insert(v,5);
insert(v,7);
for(int i = v.size()-1;i>=0;i--){
    cout<<v[i]<<" ";
}
cout<<endl;
pop(v);
for(int i = v.size()-1;i>=0;i--){
    cout<<v[i]<<" ";
}
cout<<endl;
cout<<"Element at the top : "<<v[v.size()-1]<<endl;
bool ans = v.size() == 0;
cout<<"Is stack empty ? "<<ans<<endl;
cout<<"Size of stack is : "<<v.size()<<endl;
return 0;
}