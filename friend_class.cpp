#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Student {
private:
    string password;
public:
    int student_ID;

    friend void display(Student obj);
    friend class Teacher;
};

class Teacher{
public:
    string name;
    string subject;
    int stud_mark;

    Teacher(string sub, int mark, string nam) : name(nam), subject(sub), stud_mark(mark) {}

    friend class Student;

    void teach_display() {
        cout << "Subject: " << subject << endl;
        cout << "Marks: " << stud_mark << endl;
        cout << "Teacher Name: " << name << endl;
    }
};

void display(Student obj) {
    cout << "Student ID: ";
    cin >> obj.student_ID;
    cout << "Password: ";
    cin >> obj.password;
}

int main() {
    Student s1;
    display(s1);
    Teacher t1("Computer Science", 98, "Naveed A Malik");
    t1.teach_display();
    return 0;
}