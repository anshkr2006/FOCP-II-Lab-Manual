#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;
    char choice;
    cout << "Are you logging in as Guest? (y/n): ";
    cin >> choice;
    cin.ignore(); 
    if(choice == 'y' || choice == 'Y') {
        cout << "\nWelcome Guest!" << endl;
    } 
    else {
        cout << "Enter your name: ";
        getline(cin, name);   
        cout << "\nWelcome " << name << "!" << endl;
    }

    return 0;
}
