// Question of the Day!!
// Design a C++ program that simulates a basic Candy Crush game element using class and object creation.
// Create a *class Candy* with the following attributes:
// •	string color (stores the color of the candy)
// •	int points (stores the points awarded)
// The class should have the following member functions:
// •	setCandy(string c, int p): Sets the color and points of the candy.
// •	displayCandy(): Displays the color and points of the candy.
// In main(), create two Candy objects, set their values using setCandy method, and display them using displayCandy().

// #include <iostream>
// using namespace std;

// class Candy 
// {
//     string color;
//     int points;
// public:
//     void setCandy(string c, int p);
//     void displayCandy();
// };
// void Candy::setCandy(string c, int p)
// { 
//         color=c; points=p;
// }
// void Candy::displayCandy()
// {
//         cout << "Candy Color: " << color << endl;
//         cout << "Your points are :" << points << endl;
//     }
// int main() {
//     Candy candy1, candy2;
//     candy1.setCandy("Red", 10);
//     candy2.setCandy("Blue", 20);
//     candy1.displayCandy();
//     candy2.displayCandy();

//     return 0;
// }

// now with losepoint and gain point 

#include <iostream>
using namespace std;

class Candy 
{
    string color;
    int points;
public:
    void setCandy(string c, int p);
    void displayCandy();
    void losePoint(int p);
    void gainPoint(int p);   
};
void Candy::setCandy(string c, int p)
{ 
    color = c; 
    points = p;
}
void Candy::displayCandy()
{
    cout << "Candy Color: " << color << endl;
    cout << "Your points are: " << points << endl;
}
void Candy::losePoint(int p)
{
    points = points - p;   
}
void Candy::gainPoint(int p)
{
    points = points + p;   
}
int main() 
{
    Candy candy1, candy2;

    candy1.setCandy("Red", 10);
    candy2.setCandy("Blue", 20);

    candy1.gainPoint(15);   
    candy2.losePoint(5);    

    candy1.displayCandy();
    candy2.displayCandy();

    return 0;
}