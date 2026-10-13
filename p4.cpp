// Find the index of a target element
#include <iostream>
using namespace std;

int main() {
    int a[5] = {4, 8, 2, 9, 6};
    int target = 9;

    for (int i = 0; i < 5; i++) {
        if (a[i] == target) {
            cout << i;
            return 0;
        }
    }

    cout << -1;
    return 0;
}
