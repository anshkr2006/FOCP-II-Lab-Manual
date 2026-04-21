#include <iostream>
using namespace std;

class Rectangle {
private:
    int length;
    int width;

public:
    Rectangle(int l, int w) {length = l;width = w;}

    int area() {return length * width;}

    friend void display(Rectangle r);
};

void display(Rectangle r) {
    cout << "Length: " << r.length << endl;
    cout << "Width: " << r.width << endl;
    cout << "Area: " << r.area() << endl;
}

int main() {
    Rectangle r1(0, 0);
    Rectangle r2(29, 10);

    cout << "Rectangle 1:" << endl;
    display(r1);

    cout << "Rectangle 2:" << endl;
    display(r2);

    return 0;
}