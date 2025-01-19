#include <iostream>
#include <string>
using namespace std;

class parent {
public:
    void getinfo() {
        cout << "Parent" << endl;
    }
};

class child : public parent {
public:
    void getinfo() {
        cout << "Child" << endl;
    }
};

int main() {
    child c1;
    c1.getinfo();
    parent p1;
    p1.getinfo();
    return 0;
}

/*
Overriding is a example of run time polymorphism.
*/