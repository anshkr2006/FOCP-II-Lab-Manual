#include <iostream>
using namespace std;

class Box {
    private:
        double len;
        double bre;
        double hei;
        static int count;

    public:
        Box(double l = 2.0, double b = 2.0, double h = 2.0) {
            cout << "\nBox Constructor Called." << endl;
            len = l;
            bre = b;
            hei = h;
            count++;
        }

        double Volume() {return len*bre*hei;}

        void display() {
            cout << "\nlength " << len <<"\nbreadth " << bre << "\nheight " << hei;
            cout << "\nVolume " << Volume() << endl;;
            cout << "\nObject count " << count << endl;
        }
};

int Box::count;

int main(){
    Box b1(3.3, 1.2, 1.5);
    b1.display();
    Box b2(8.5, 6.0, 2.0);
    b2.display();
    return 0;
}