#include <iostream>
#include <string>
using namespace std;

class Bank {
private:
    string account_holder;
    int balance;
public:
    Bank(string name, int bal): account_holder(name), balance(bal) {}

    friend void display(Bank obj); 
};

void display(Bank obj){
    cout << "Account Holder: " << obj.account_holder << endl;
    cout << "Balance: PKR " << obj.balance << endl;
}

int main() {
    Bank b1("ALI", 500000);
    display(b1);
    return 0;
}