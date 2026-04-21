// overiding

#include<iostream>
using namespace std;
class Shape{
public:
Shape(){
    cout<<"Shape constructor called"<<endl;
}
    void area(){
        cout<<"no dimensions of shape"<<endl;
    }
    void display(){
        cout<<"This is a 2d shape"<<endl;
    }
};

class Rectangle : public Shape{
    int length;
    int breadth;
    public:
    Rectangle(int l=5,int b=10):length(l),breadth(b){
        cout<<"Rectangle object created"<<endl;
    }
    void area(){
        cout<<"Area of rectangle: "<<length*breadth<<endl;
    }
};
int main(){
   Shape s1;
   Rectangle r1,r2(3,4);
    s1.area();
    r1.area();
    r2.Shape::area();
    s1.display();
    r1.display();
    r2.display();
    

    return 0;
}