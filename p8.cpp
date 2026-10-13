// Add two numbers using pointers
#include <iostream>
using namespace std;

int main() {
    int a = 10, b = 20;
    int *p = &a, *q = &b;

    cout << *p + *q;
    return 0;
}
