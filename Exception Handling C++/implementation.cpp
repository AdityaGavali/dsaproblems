#include <bits/stdc++.h>
using namespace std;

double division(int x, int y) {
if( y == 0 ) {
throw "Division by zero is not allowed";
}
return (x/y);
}

int main () {
int x = 50;
int y = 0;
double z = 0;

try {
z = division(x, y);
cout << z << endl;
}catch (string msg) {
cerr << msg << endl;
}

return 0;
}