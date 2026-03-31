#include<iostream>
#include<cstdlib>
#include<ctime>


using namespace std;
class A{
    int a=rand()%100; // Random value for demonstration
public:
A(){
    cout<<"Constructor of A called"<<endl;
}
~A(){
    cout<<"Destructor of A called"<<endl;

}
void display(){
    cout<<"value of A: "<<a<<endl;
}};

class B:virtual public A{
    int b=rand()%100; // Random value for demonstration
public:
B(){
    cout<<"Constructor of B called"<<endl;
}
~B(){
    cout<<"Destructor of B called"<<endl;

}
void display_B(){
    display();
    cout<<"value of B: "<<b<<endl;
}};

class C:virtual public A{
    int c=rand()%100; // Random value for demonstration
public:
C(){
    cout<<"Constructor of C called"<<endl;
}
~C(){
    cout<<"Destructor of C called"<<endl;

}
void display_C(){
    display();
    cout<<"value of C: "<<c<<endl;
}};
class D:public B,public C{
    int d=rand()%100; // Random value for demonstration
public:
D(){
    cout<<"Constructor of D called"<<endl;
}
~D(){
    cout<<"Destructor of D called"<<endl;

}
void display_D(){
    display();
    display_B();
    display_C();
    cout<<"value of D: "<<d<<endl;
}};

int main(){
srand(time(0)); // Seed for random number generation
D d;
d.display_D();


    return 0;
}