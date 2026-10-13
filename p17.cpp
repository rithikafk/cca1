// Print a day using enum
#include <iostream>
using namespace std;

enum Day {
    MON = 1, TUE, WED, THU, FRI
};

int main() {
    Day d = WED;

    cout << d;
    return 0;
}
