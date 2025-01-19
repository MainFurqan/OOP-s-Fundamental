#include <iostream>
#include <string>
using namespace std;

class submission {
public:
    int sum(int a, int b) {
        cout << "sum; " << a+b << endl;
        return 1;
    }
    
    double sum(double a, double b) {
        cout << "sum: " << a+b << endl;
        return 1;
    }
};

int main() {
    submission s1;
    s1.sum(2233, 77889);
    s1.sum(223.3, 778.89);
    return 0;
}

// Above is a example of function overloading(compile time polymorphism)