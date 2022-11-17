#include <iostream>
#include <string>
using namespace std;

struct Rectangle {
    int width;
    int height;
};

int area(struct Rectangle r) {
    return r.width * r.height;   
}

int main() {
    struct Rectangle r = {5, 2};
    cout << "Area of rectangle: " << area(r) << endl;
    return 0;
}
