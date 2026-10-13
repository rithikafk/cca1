// Store and print employee details
#include <iostream>
using namespace std;

struct Employee {
    int id;
    float salary;
};

int main() {
    Employee e = {101, 25000};

    cout << e.id << " " << e.salary;
    return 0;
}
