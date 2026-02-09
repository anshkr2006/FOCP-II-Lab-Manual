// #include<iostream>
// using namespace std;
// void welcome(void)
// {
//     cout<<"Welcome!";
// }
// void welcome(string name)
// {
//     cout<<"\nWelcome "<<name;
// }
// int main()
// {
//     welcome();
//     string name;
//     cout<<"\nEnter your name: ";
//     cin>>name;
//     welcome(name);
//     return 0;
// }

#include<iostream>
using namespace std;
void welcome(string name="User")
{
    cout<<"\n Welcome "<<name;
}
//void welcome{string="User"}
int main()
{ 
    welcome();//function call
    welcome("Section A");
    return 0;
}