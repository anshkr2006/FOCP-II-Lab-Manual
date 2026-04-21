#include<iostream>
#include<exception>
using namespace std;

int main() {
    int a = 10, b=0;
    try{
        if (b==0){
            throw "Division by zero error!";
        }
        cout<<"Result:"<< a / b <<endl;
    }
    catch(const char* msg){
        cout<<"Exception caught:"<< msg << endl;
    }

    cout<<"Program continues..." << endl;
    return 0;
}

// exception handling in c++


#include<iostream>
#include<stdexcept>
#include<exception>
using namespace std;


int main(){
    int a;
    cout<<"Enter age: ";
    cin>>a;
    try{
        if(a<=0){
            throw invalid_argument("Age cannot be zero or negative");
        }
        cout<<"age: "<<a<<endl;
    }
    catch(invalid_argument &e){
        cout<<"Error: "<<e.what()<<endl;
    }
    catch(...){
        cout<<"Error: An unexpected error occurred"<<endl;
    }   

    return 0;
}