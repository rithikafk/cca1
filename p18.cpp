// Display traffic light instruction
#include <iostream>
using namespace std;

enum Light {
    RED = 1, YELLOW, GREEN
};

int main() {
    Light l = RED;

    if (l == RED)
        cout << "Stop";
    else if (l == YELLOW)
        cout << "Wait";
    else
        cout << "Go";

    return 0;
}
