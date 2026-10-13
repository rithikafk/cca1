// Compare marks of two students
#include <iostream>
using namespace std;

struct Student {
    int marks;
};

int main() {
    Student a = {80}, b = {90};

    if (a.marks > b.marks)
        cout << "Student A";
    else
        cout << "Student B";

    return 0;
}
