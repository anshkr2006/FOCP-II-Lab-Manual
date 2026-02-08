// Q11-A wholesale supplier applies 10% discount if the order > 1000 items. Implement a solution to compute total 
// expenses and apply a discount accordingly. 


#include <iostream>
using namespace std;

int main() {
    int items;
    float price_per_item, total, discount = 0, final_amount;

    cout << "Enter number of items: ";
    cin >> items;

    cout << "Enter price per item: ";
    cin >> price_per_item;

    total = items * price_per_item;

    if (items > 1000) {
        discount = 0.10 * total;   // 10% discount
    }

    final_amount = total - discount;

    cout << "\nTotal cost before discount: " << total << endl;
    cout << "Discount applied: " << discount << endl;
    cout << "Final expense: " << final_amount << endl;

    return 0;
}

// Q12- A civil engineer classifies a triangle design as equilateral, isosceles, or scalene. Implement a solution to 
// check the triangle type based on its sides

#include <iostream>
using namespace std;

int main() {
    float a, b, c;

    cout << "Enter three sides of triangle: ";
    cin >> a >> b >> c;
    if ((a + b > c) && (a + c > b) && (b + c > a)) {

        if (a == b && b == c) {
            cout << "Triangle is Equilateral";
        }
        else if (a == b || b == c || a == c) {
            cout << "Triangle is Isosceles";
        }
        else {
            cout << "Triangle is Scalene";
        }

    } else {
        cout << "Not a valid triangle";
    }
    return 0;
}

// Q13-A mathematics tool computes the exact roots of a quadratic equation for teaching purposes. Implement a 
// solution to calculate the roots of a quadratic equation.

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float a, b, c, d, r1, r2;
    cout << "Enter a b c: ";
    cin >> a >> b >> c;
d = b*b - 4*a*c;
 if(d > 0) {
        r1 = (-b + sqrt(d)) / (2*a);
        r2 = (-b - sqrt(d)) / (2*a);
        cout << "Real & Different Roots: " << r1 << " " << r2;
    } else if(d == 0) {
        r1 = -b / (2*a);
        cout << "Real & Equal Roots: " << r1;
    } else {
        cout << "Imaginary Roots";
    }
return 0;
}


// Q14. Develop a menu-driven calculator program in C++ to perform basic arithmetic operations. 
// The program should continue executing based on the user's choice and display the result of each operation.

#include <iostream>
using namespace std;

int main() {
    int choice;
    float a, b;

    do {
        cout << "\n--- Calculator Menu ---\n";
        cout << "1. Addition\n";
        cout << "2. Subtraction\n";
        cout << "3. Multiplication\n";
        cout << "4. Division\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if(choice >= 1 && choice <= 4) {
            cout << "Enter two numbers: ";
            cin >> a >> b;
        }
switch(choice) {
 case 1:
cout << "Result = " << a + b << endl;
                break;
case 2:
 cout << "Result = " << a - b << endl;
                break;
 case 3:
cout << "Result = " << a * b << endl;
                break;
 case 4:
if(b != 0)
cout << "Result = " << a / b << endl;
                else
  cout << "Division by zero not allowed\n";
break;
case 5:
 cout << "Exiting calculator...";
 break;
default:
cout << "Invalid choice\n";
        }
} while(choice != 5);
 return 0;
}

// Q15. A data analytics tool finds the maximum sales figure from multiple entries. 
// Implement a solution to accept ‘n’ numbers and display the largest. 

#include<iostream>
using namespace std;

int main() {
    int n;
    float num, max;
    cout<<"Enter how many numbers: ";
    cin>>n;
    cout<<"Enter number: ";
    cin>>max; 
    for(int i=2; i<=n; i++){
        cout<<"Enter number: ";
        cin>>num;
        if(num > max)
            max = num;
    }
    cout<<"Largest = "<<max;
    return 0;
}

// Q16. A cybersecurity tool verifies prime numbers used in encryption keys. Implement a solution to accept a 
// number and check whether it is prime.


#include<iostream>
using namespace std;

int main() {
    int n, i, count = 0;
    cout<<"Enter number: ";
    cin>>n;

    for(i=1; i<=n; i++){
        if(n % i == 0)
            count++;
    }

    if(count == 2)
        cout<<"Prime Number";
    else
        cout<<"Not Prime";

    return 0;
}


// Q17. A learning application analyzes numbers for mathematical properties. 
// Design a solution to check whether a given number is a Perfect number or an Armstrong number. 

#include<iostream>
#include<cmath>
using namespace std;

int main() {
    int n, i, sum=0, temp, rem, arm=0;
    cout<<"Enter number: ";
    cin>>n;
    for(i=1; i<=n/2; i++){
        if(n%i==0) sum+=i;
    }
    if(sum==n)
        cout<<"Perfect Number\n";
    else
        cout<<"Not Perfect\n";
    temp=n;
    while(temp>0){
        rem=temp%10;
        arm += rem*rem*rem;
        temp/=10;
    }
    if(arm==n)
        cout<<"Armstrong Number";
    else
        cout<<"Not Armstrong";
    return 0;
}

// Q18. A String-matching tool validates if IDs are palindromes. Implement 
// a solution to check whether a given ID is a palindrome. 

// Q19-A network security system generates prime numbers in a range for encryption key pools. Implement a 
// solution to find all prime numbers within a given range. 

#include<iostream>
using namespace std;

int main() {
    int a, b, i, j, count;
    cout<<"Enter range: ";
    cin>>a>>b;
for(i=a; i<=b; i++){
count = 0;
for(j=1; j<=i; j++){
   if(i % j == 0)
     count++;
        }
 if(count == 2)
cout<<i<<" ";
    }
return 0;
}
