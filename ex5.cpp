 #include<iostream>
using namespace std;
class book {
    public:
    string title;
    string author;
    float price;
    void display() {
        cout<<"title;"<<title<<",author:"<<author<<",price"<<price<<endl;  
    }
};
int main() {
    book b1,b2;
    b1.title = "spiderman";
    b1.author = "stan lee";
    b1.price = 2000;
    b2.title = "batman";
    b2.author = "christopher nolan";
    b2.price = 1200;
    b1.display();
    b2.display();
    return 0;
}
