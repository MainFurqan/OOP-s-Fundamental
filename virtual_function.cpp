#include <iostream>
#include <string>
using namespace std;

class Teacher {
public:
    virtual void hello() {                // Virtual function always declare in parent class
        cout << "Hello Teacher." << endl;
    }
};

class student : public Teacher {
public:
    void hello() {
        cout << "Yes student." << endl;
    }
};

int main() {
    Teacher t1;
    t1.hello();
    student s1;
    s1.hello();
    return 0;
}

/*
Virtual function is an example of function overriding and Run Time polymorphism.
*/