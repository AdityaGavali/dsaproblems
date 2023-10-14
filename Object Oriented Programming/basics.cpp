#include<bits/stdc++.h>
using namespace std;
class hero{
    public:
int health;
char level;
private:
int count;
public:
void setcount(int c){
    count = c;
}
int getcount(){
    return count;
}

};
int main(){
   //static 
hero h1;
 // dyanamic
 hero*h2 = new hero;
cout<<sizeof(h1)<<endl;
h1.health = 10;
cout<<h1.health<<endl;

return 0;
}