// Check whether a student passed
#include <iostream>
using namespace std;

struct Student {
    int marks;
};

int main() {
    Student s = {75};

    if (s.marks >= 40)
        cout << "Pass";
    else
        cout << "Fail";

    return 0;
}
