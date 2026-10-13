// Swap two numbers using pointers
#include <iostream>
using namespace std;

void swapNum(int *a, int *b) {
    int t = *a;
    *a = *b;
    *b = t;
}

int main() {
    int a = 5, b = 10;

    swapNum(&a, &b);

    cout << a << " " << b;
    return 0;
}
