#include <iostream>
using namespace std;

class Student {
public:
    int roll;
    string name;
    static int count;  // Declaration of static data member

    Student(string n, int r) {
        name = n;
        roll = r;
        count++;  // Increment the count whenever a new object is created
    }

    void display() {
        cout << "Name: " << name << ", Roll: " << roll << endl;
    }

    static void showCount() {
        cout << "Total Students: " << count << endl;
    }
};

// Definition and initialization of static data member outside the class
int Student::count = 0;

int main() {
    Student s1("Ashutosh", 1);
    Student s2("Ravi", 2);
    Student s3("Priya", 3);

    s1.display();
    s2.display();
    s3.display();

    // Access static member via class
    Student::showCount();

    return 0;
}
