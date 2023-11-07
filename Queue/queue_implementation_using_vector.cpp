#include<bits/stdc++.h>
using namespace std;
//operations of queue : push, pop,  element at the front , emppty or not , size of stack
int main(){
    queue<int>q;
    q.push(10);
    q.push(2);
    q.push(23);
    cout<<q.front()<<endl;
    cout<<q.back()<<endl;
    q.pop();
    cout<<q.size()<<endl;
    q.pop();
    cout<<q.empty()<<endl;
    return 0;

}