#include <iostream>
#include <string>
using namespace std;

// Teacher is the name of the class
class Teacher {
private:
    int salary = 50000;  // Private attribute, accessible only within the class

public:
    string name;         // Public attribute for storing the teacher's name

    // Method to display teacher information
    void getinfo() {
        cout << "Name: " << name << endl;
        cout << "Salary: " << salary << endl;
    }
};

int main() {
    Teacher t1;              // 't1' is an object of the Teacher class
    t1.name = "Furqan";      // Assign a name to the teacher
    t1.getinfo();            // Call the method to display teacher information

    return 0;
}

// Above code is example of encapsulation