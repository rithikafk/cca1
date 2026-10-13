// Find the sum using a pointer
#include <iostream>
using namespace std;

int main() {
    int a[4] = {1, 2, 3, 4};
    int *p = a;
    int sum = 0;

    for (int i = 0; i < 4; i++)
        sum += *(p + i);

    cout << sum;
    return 0;
}
