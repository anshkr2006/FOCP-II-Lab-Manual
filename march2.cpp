// Write a C++ program to swap two integers and two floating-point numbers using function overloading and call by reference.

// #include <iostream>
// using namespace std;
// void swap(int &a, int &b);
// void swap(float &c, float &d);
// int main()
// {
//     int x = 18, y = 45;
//     swap(x, y);
//     float p = 18.1, q = 45.4;
//     swap(p, q);
//     return 0;
// }
// void swap(int &a, int &b)
// {
//     int temp = a;
//     a = b;
//     b = temp;
//     cout << "a = " << a << "\nb = " << b << endl;
// }
// void swap(float &c, float &d)
// {
//     float temp = c;
//     c = d;
//     d = temp;
//     cout << "c = " << c << "\nd = " << d << endl;
// }


// Write a C++ program to demonstrate function overloading by creating multiple multiply() functions to multiply two integers, three integers, and two double numbers.

// #include <iostream>
// using namespace std;

// int multiply(int, int);
// int multiply(int, int, int);
// double multiply(double, double);

// int main(){
//     int a,b,c,d,e;
//     double f,g;

//     cout << "Enter integer (a, b): ";
//     cin >> a >> b;
//     cout << "Result: " << multiply(a,b);
//     cout << endl;

//     cout << "Enter integer (a, b, c): ";
//     cin >> c >> d >> e;
//     cout << "Result: " << multiply(c,d,e);
//     cout << endl;

//     cout << "Enter double (a, b): ";
//     cin >> f >> g;
//     cout << "Result: " << multiply(f,g);
//     cout << endl;

//     return 0;
// }
// int multiply(int a, int b){
//     return a*b;
// }
// int multiply(int a, int b, int c){
//     return a*b*c;
// }
// double multiply(double a, double b){
//     return a*b;
// }


// Write a C++ program to demonstrate constructors and class objects by creating a SmartLight class with data members and methods to display light status.

#include <iostream>
using namespace std;

class MovieTicket {
    string movieName;
    int seatNumber;
    double ticketPrice;
    bool isBooked;

public:
    MovieTicket() { movieName="N/A"; seatNumber=0; ticketPrice=200; isBooked=false; }
    MovieTicket(string m,int s,double p){ movieName=m; seatNumber=s; ticketPrice=p; isBooked=false; }
    void bookTicket(){ 
        if(!isBooked){ isBooked=true; cout<<"Booked\n"; }
        else cout<<"Already booked\n";
    }
    void cancelTicket(){
        if(isBooked){ isBooked=false; cout<<"Cancelled\n"; }
        else cout<<"Not booked\n";
    }
    void displayTicketDetails(){
        cout<<movieName<<" | Seat "<<seatNumber
            <<" | Price "<<ticketPrice
            <<" | "<<(isBooked?"Booked":"Not Booked")<<endl;
    }
    double calculateTotalCost(int n){ return ticketPrice*n; }
};
int main(){
    MovieTicket t1("Avengers",12,250), t2("Batman",5,300);

    t1.bookTicket();
    t1.displayTicketDetails();

    t2.bookTicket();
    t2.cancelTicket();
    t2.displayTicketDetails();

    cout<<"Total Cost: "<<t1.calculateTotalCost(3);
}