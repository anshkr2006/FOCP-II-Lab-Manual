#include <iostream>
using namespace std;

class A
{
    int a1;
    int a2;

public:
    A()
    {
        cout << "\nDefault";
        a1 = 0;
        a2 = 0;
    }
    A(int a1, int v2)
    {
        this->a1 = a1;
        this->a2 = v2;
    }
    void display()
    {
        cout << "\na1 = " << a1 << "\na2 = " << a2;
    }
};
int main()
{
    A obj1, obj2(20, 45);
    obj1.display();
    obj2.display();

    return 0;
}

#include<iostream>
using namespace std;
class person{
    string name;
    int age;
public:
person(){
    cout<<"person default constructor called"<<endl;
    name="Guest"; age=0;}
person(string n,int a){
    name=n; age=a;
cout<<"person parameterized constructor called"<<endl;
}
void display(){
    cout<<"Name: "<<name<<endl<<"Age: "<<age<<endl;}
};
class student:public person{
    string roll;
    public:
    student():person(){
        cout<<"student default constructor called"<<endl;
        roll="0000";
    }
    student(string n,int a,string r):person(n,a){
        roll=r;
        cout<<"student parameterized constructor called"<<endl;
    }
    void display_student(){
        display();
        cout<<"Roll: "<<roll<<endl;
    }
};
int main(){
    student  a,s("Ansh", 19, "25csu031");
    a.display_student();
    s.display_student();

    return 0;
}