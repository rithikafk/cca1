// Count even numbers in an array
#include <iostream>
using namespace std;

int main() {
    int a[5] = {2, 5, 8, 7, 10};
    int count = 0;

    for (int i = 0; i < 5; i++) {
        if (a[i] % 2 == 0)
            count++;
    }

    cout << count;
    return 0;
}
