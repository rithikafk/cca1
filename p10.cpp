// Store and print student details
#include <iostream>
using namespace std;

struct Student {
    int roll;
    int marks;
};

int main() {
    Student s = {1, 90};

    cout << s.roll << " " << s.marks;
    return 0;
}
