#include<iostream>
using namespace std;
class car {
    public:
    string company;
    string model;
    float price;
    void display() {
        cout<<"company;"<<company<<",model:"<<model<<",price"<<price<<endl;  
    }
};
int main() {
    car c1,c2;
    c1.company = "hyndai";
    c1.model = "creta";
    c1.price = 2000000;
    c2.company = "toyoto";
    c2.model = "innova";
    c2.price = 1200000;
    c1.display();
    c2.display();
    return 0;
}
