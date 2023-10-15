#include<bits/stdc++.h>
using namespace std;
//operations of queue : push, pop,  element at the front , emppty or not , size of stack
void insert(vector<int>&v,int k){
   v.push_back(k);
}
void pop(vector<int>&v){
    int k = v[0];
    v.erase(v.begin()+0);
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
for(int i = 0;i<v.size();i++){
    cout<<v[i]<<" ";
}
cout<<endl;
pop(v);
for(int i = 0;i<v.size();i++){
    cout<<v[i]<<" ";
}
cout<<endl;
cout<<"Element at the  : "<<v[0]<<endl;
bool ans = v.size() == 0;
cout<<"Is queue empty ? \n Ans :- "<<ans<<endl;
cout<<"Size of queue is : "<<v.size()<<endl;
return 0;
}