#include<iostream>
#include<string>

using namespace std;

int main() {
    string food = "Pizza";
    string* ptr = &food;

    cout << food << endl;
    cout << &food << endl;
    cout << "Food is at " << ptr << endl;
    cout << "Value at ptr " << *ptr << endl;
    return 0;
}