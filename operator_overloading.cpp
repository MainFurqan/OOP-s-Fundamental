#include <iostream>
using namespace std;

class Complex {
private:
    int real;
    int img;
public:
    Complex(int r, int im) : real(r), img(im) {}

    friend Complex operator+(Complex obj1, Complex obj2);

    void display() {
         cout << real << " + " << img << "i" << endl;
    }

};

Complex operator+(Complex obj1, Complex obj2){
    return Complex(obj1.real + obj2.real, obj1.img + obj2.img);
}

int main() {
    Complex c1(22, 78), c2(45, 90);
    Complex c3 = c1 + c2;
    c1.display();
    c2.display();
    c3.display();
    return 0;
}
