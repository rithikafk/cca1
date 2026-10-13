// Display result using enum
#include <iostream>
using namespace std;

enum Result {
    FAIL, PASS
};

int main() {
    int marks = 70;
    Result r;

    if (marks >= 40)
        r = PASS;
    else
        r = FAIL;

    if (r == PASS)
        cout << "Pass";
    else
        cout << "Fail";

    return 0;
}
