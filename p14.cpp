// Store and print an integer using a union
#include <iostream>
using namespace std;

union Data {
    int num;
    float decimal;
};

int main() {
    Data d;
    d.num = 25;

    cout << d.num;
    return 0;
}
