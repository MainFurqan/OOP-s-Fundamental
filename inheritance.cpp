#include <iostream>
#include <string>
using namespace std;

class Teacher { // Parent class 
public:
    string name;
    int age;

    void getinfo() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class Student : public Teacher { // child class
public:
    int roll_no;

    void getinfo() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Roll No: " << roll_no << endl;
    }
};

int main() {
    Student s1;
    s1.age = 20;
    s1.name = "Furqan";
    s1.roll_no = 4218;
    s1.getinfo();
    return 0;
}


/*
Type of Inheritance
a) Single Inheritance
b) Multi Level Inheritance
c) Multiply Inheritance
d) Hierarchial Inheritance 
*/