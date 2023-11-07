#include<iostream>
#include<fstream> // preprocessing directive file or header file required to perform file creation and file read operation
using namespace std;
int main(){
    char arr[100];
    // FILE INPUT OPERATIONS 
    cout<<"Enter your name and age";
    cin.getline(arr,100);
    ofstream myfile("abc.txt"); // creating a file . automatically opens a file but overwrting takes place if we run code again and again
    // TO avoid overwritting , we can use , ofstream myfile("abc.txt", ios::app); // where app ; append
       // fstream myfile("abc.txt" , ios::out || ios::app); or  fstream myfile("abc.txt" , ios::in );
    // myfile.open("abc.txt"); to open the file manually 

   myfile<<arr;
   myfile.close();
   cout<<"Operations performed successfully"<<endl;
   // OPEN THE FILE IN READ MODE 
   cout<<" File Reading Operations started"<<endl;
   char arr1[100];
   ifstream obj("abc.txt");
   obj.getline(arr1,100);
   cout<<arr1<<endl;
   cout<<"File read operation completed"<<endl;
   obj.close();

   

    return 0;
}