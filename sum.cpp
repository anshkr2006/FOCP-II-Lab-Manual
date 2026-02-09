// #include <iostream>
// using namespace std;
// int addNumbers(int a, int b);
// int main()
// {
//     int x, y, result;
//     cout << "Enter two numbers: ";
//     cin >> x >> y;
//     result = addNumbers(x, y);  
//     cout << "Sum = " << result;
//     return 0;
// }
// int addNumbers(int a, int b)
// {
//     int sum;
//     sum = a + b;
//     return sum;    
//  }


// #include<iostream>
// using namespace std;

// int sum(int,int);
// float sum(float,float);
// double sum(double,double);

// int main()
// {
//     int a,b;
//     float f1,f2;
//     cout<<"\n Enter 2 int values:";
//     cin>>a>>b;
//     cout<<"\n Enter 2 float values:";
//     cin>>f1>>f2;
//     cout<<"\n int sum:"<<sum(a,b);
//     cout<<"\n float sum:"<<sum(f1,f2);
//     return 0;
// }
// int sum(int n1,int n2)
// {
//     return (n1+n2);
// }
// float sum(float n1, float n2)
// {
//     return (n1+n2);
// }
// double sum(double n1, double n2)
// {
//     return (n1+n2);
// }


#include<iostream>
using namespace std;

int sum(int,int);
float sum(float,float);
double sum(double,double);

int main()
{
    float f1,f2;

    cout<<"\n sum: "<<sum(113,15);
    cout<<"\n sum:"<<sum(113.567,15.789);
    cout<<"\n sum:"<<sum(13.567f,15.789f);
    return 0;
}
int sum(int n1,int n2)
{
    cout<<"\n int sum:";
    return (n1+n2);
}
float sum(float n1, float n2)
{
    cout<<"\n float sum:";
    return (n1+n2);
}
double sum(double n1, double n2)
{
    cout<<"\n double sum:";
    return (n1+n2);
}