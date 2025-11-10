#include<iostream>
using namespace std;
class account {
    public:
    int accno;
    string name;
    float balance;
    void display() {
        cout<<"accno;"<< accno<<",name:"<<name<<",balance"<<balance<<endl;  
    }
};
int main() {
    account a1,a2;
    a1.name = "gova";
    a1.accno = 1101;
    a1.balance = 25000.45;
    a2.name = "vamsiroyal";
    a2.accno = 1002;
    a2.balance = 40000.98;
    a1.display();
    a2.display();
    return 0;
}
