#include <iostream>
using namespace std;

class Rectangle {
    private:
        float length;
        float width;
    
    public:
        void inputDimensions();
        float calculateArea();
        float calculatePerimeter();
        void displayResult();
};
void Rectangle::inputDimensions() {
    cout << "Enter Length & Width: ";
    cin >> length >> width;
}
float Rectangle::calculateArea() {
    return (length*width);
}
float Rectangle::calculatePerimeter() {
    return (2*(length+width));
}
void Rectangle::displayResult() {
    cout << "\nAREA: " << calculateArea();
    cout << "\nPERIMETER: " << calculatePerimeter();
}
int main(){
    Rectangle r1;
    r1.inputDimensions();
    r1.displayResult();
    return 0;
}