// Find the largest element in an array
#include <iostream>
using namespace std;

int main() {
    int a[5] = {10, 20, 5, 40, 30};
    int max = a[0];

    for (int i = 1; i < 5; i++) {
        if (a[i] > max)
            max = a[i];
    }

    cout << max;
    return 0;
}
