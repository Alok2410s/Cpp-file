#include <iostream>
#include <cmath> // for M_PI
using namespace std;

// Circle
float area(float r) {
    return M_PI * r * r;
}

// Rectangle
float area(float l, float w) {
    return l * w;
}

// Triangle
float area(float b, float h, int) {
    return 0.5 * b * h;
}

int main() {
    float radius, length, width, base, height;

    cout << "Enter radius of circle: ";
    cin >> radius;
    cout << "Area of Circle = " << area(radius) << endl;

    cout << "\nEnter length and width of rectangle: ";
    cin >> length >> width;
    cout << "Area of Rectangle = " << area(length, width) << endl;

    cout << "\nEnter base and height of triangle: ";
    cin >> base >> height;
    cout << "Area of Triangle = " << area(base, height, 0) << endl;

    return 0;
}
