#include <iostream>
#include <string>
using namespace std;

class shape{
    public:

        virtual void draw() = 0; // Pure virtual function
        // those class which have the pure virtual function its become abstract class 
};

class circle: public shape{
    public:
        void draw() {
            cout << "Circle" << endl;
        }
};

int main() {
    circle c1;
    c1.draw();
    return 0;
}