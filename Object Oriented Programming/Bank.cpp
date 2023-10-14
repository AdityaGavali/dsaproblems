#include<iostream>
#include<string>
using namespace std;
class BankAccount{
   private:
   int account_no;
   int balance;
   public:
   BankAccount(int account_no , int balance){
    this->account_no = account_no;
    this->balance = balance;
   }
    void display(){
        cout<<"Account No: "<<account_no<<endl;
        cout<<"Balance: "<<balance<<endl;

    }
    void deposit(int amount){
        balance += amount;
    }
    void withdraw(int amount){
        if(balance<amount)cout<<"Not enough balance"<<endl;
        else  balance -= amount;
    }
};

int main(){
    BankAccount* B1 = new BankAccount(100, 30000);
    B1->display();
    B1->deposit(200);
    B1->display();
    B1->withdraw(100);
    B1->display();
    return 0;

}