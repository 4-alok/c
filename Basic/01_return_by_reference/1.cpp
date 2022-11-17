#include <iostream>
using namespace std;

int& returnValue(int& x) {
    cout << "x = " << x
        << "\nThe address of x is: "
        << &x << endl;
    return x;
}

int main() {
    int a = 20;
    int& b = returnValue(a);

    return 0;
}