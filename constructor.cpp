#include <iostream>
#include <string>
using namespace std;

class Student{
public:
    string name = "ALI";

    // Non-parametrize constructor
    Student() {
        cout << "Custom Constructor" << endl;
    }

    // Parametrize constructor (User-Defined Constructor)
    Student(string name){
        this->name = name;                    // ' this ' is a pointer ot the current object
    }

    // Copy constructor
    Student(Student &obj){
        this->name = obj.name; 
    }

    void getinfo() {
        cout << "Name: " << name << endl;
    }
};

int main() {
    Student s1("ALI");      // Call the parametrize constructor
    s1.getinfo();

    Student s2(s1);         // Call the copy constructor
    s2.getinfo();
    return 0;
}