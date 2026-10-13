// Store and print a float using a union
#include <iostream>
using namespace std;

union Data {
    int num;
    float decimal;
};

int main() {
    Data d;
    d.decimal = 5.5;

    cout << d.decimal;
    return 0;
}
