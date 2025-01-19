#include <iostream>
#include <string>
using namespace std;

class Employees {
public:
    string name = "ALI";
    int* age_ptr;                      // Pointer to dynamically allocate memory for the age

    Employees(string name, int age) {
        this->name = name;
        age_ptr = new int[5];          // Allocate memory on the heap 
        *age_ptr = age;
    }

    /*
    // Shallow copy (Default Copy)            
    Employees(Employees &obj) {              // Shallow copy causes issue in case of Dynamic Memory Allocation
        this->name=obj.name;
        this->age_ptr=obj.age_ptr;
    }

    */

    // Deep Copy
    Employees(Employees &obj) {
        this->name=obj.name;
        age_ptr = new int{5};          // Again allocate the memory for tackle of shallow copy issue
        *age_ptr=*obj.age_ptr;
    }
    void getinfo() {
        cout << "Name: " << name << endl;
        cout << "AGE: " << *age_ptr << endl;
    }


};

int main() {
    Employees e1("Furqan", 20);
    e1.getinfo();
    Employees e2(e1);
    
    // Change the value of second object
    *(e2.age_ptr) = 22;           
    e2.name = "ALI";

    e1.getinfo();
    e2.getinfo();


    return 0;
}