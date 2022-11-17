#include<iostream>
#include<string>
using namespace std;

void swap(int*a, int*b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int a, b;
    a = 5;
    b = 2;
    cout << "a = " << a << " b = " << b << endl;
    swap(&a, &b);
    cout << "a = " << a << " b = " << b << endl;

    return 0;
}

// Use of pointer
// Accessing Heap Memory
// Call by Reference
// Accessing files
// Accessing any peripheral

