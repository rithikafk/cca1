// Perform addition or subtraction using enum
#include <iostream>
using namespace std;

enum Operation {
    ADD = 1, SUBTRACT
};

int main() {
    int a = 10, b = 5;
    Operation op = ADD;

    if (op == ADD)
        cout << a + b;
    else
        cout << a - b;

    return 0;
}
