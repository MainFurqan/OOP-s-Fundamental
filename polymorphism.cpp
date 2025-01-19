#include <iostream>
#include <string>
using namespace std;

class Teacher {
public:
    string name = "ALI";
    int age = 20;

    // Parametrize constructor
    Teacher(string name, int age) {
        this->name = name;
        this->age = age;
    }

    // Non-Parametrize constructor
    Teacher() {
        cout << "non-parametrize constructor" << endl;
    }

    // Copy constructor
    Teacher(Teacher &obj) {
        this->name = obj.name;
        this->age = obj.age;
    }

    void getinfo() {
        cout << "Name" << name << endl;
        cout << "Age" << age << endl;
    }

};

int main() {
    // Invoke the Non-Parametrize constructor
    Teacher t1;            
    t1.name = "Furqan";
    t1.getinfo();
    // Invoke the Parametrize constructor
    Teacher t2("Salman", 22);
    t2.getinfo();
    // Invoke the Copy constructor
    Teacher t3(t2);
    t3.getinfo();

    return 0;
}

/*
The above is an example of compile-time polymorphism, as it demonstrates constructor overloading. The invocation of a specific constructor is determined based on the context in which it is called.
*/