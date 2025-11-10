#include<iostream>
using namespace std;
class laptop {
public:
string brand;
string processor;
int ram;
void display() {
cout<<"Brand:"<<brand<<"Processor:"<<processor<<"RAM:"<<ram<<"GB"<<endl;
}
};
int main() {
    laptop l1,l2;
    l1.brand = "Victus";
    l1.processor = "intel i7";
    l1.ram = 16;
    l2.brand = "samsung";
    l2.processor = "intel i5";
    l2.ram = 8;
        l1.display();
        l2.display();
        return 0;
}
