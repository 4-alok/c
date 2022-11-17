#include <iostream>
#include <string>

using namespace std;

int main() {
    int a[5] = {5, 2, 3, 6, 5};

    int *p, *q;
    p = &a[0];
    q = &a[3];

    cout << "p = " << p << endl;
    cout << "q = " << q << endl;
    cout << "*p = " << *p << endl;
    cout << "*q = " << *q << endl;

    p++;
    cout << "*p = " << *p << endl;
    q--;
    cout << "*q = " << *q << endl;

    // Distance between p and q
    int l = q - p;
    cout << "l = " << l << endl;

    // Distance between q and p
    int r = p - q;
    cout << "r = " << r << endl;
    return 0;
}