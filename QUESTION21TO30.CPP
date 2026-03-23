// Q20. A printing press needs to repeat labels in a fixed tabular layout. Implement a solution to display:
// 1 2 3 4 5
// 1 2 3 4 5
// 1 2 3 4 5

#include <iostream>
using namespace std;

int main() {
    for(int i = 1; i <= 3; i++) {
        for(int j = 1; j <= 5; j++) {
            cout << j << " ";
        }
        
        cout << endl;
    }
    return 0;
}

// Q20(2nd part). 
//A board displays reverse seating layouts for events. Implement a solution to print:
// 5 4 3 2 1
// 5 4 3 2
// 5 4 3
// 5 4
// 5

#include <iostream>
using namespace std;

int main() {
    for(int i = 5; i >= 1; i--) {
        for(int j = 5; j >= i; j--) {
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}

//Q21. A CAD tool generates rectangular hollow frames. Implement a solution to display:
//  ********
//  *      *
//  *      *
//  *      *
//  *      *
//  *      *
//  *      *
//  ********

#include <iostream>
using namespace std;

int main() {
    int rows = 7;
    int cols = 9;
    for(int i = 1; i <= rows; i++) {
        for(int j = 1; j <= cols; j++) {
            if(i == 1 || i == rows || j == 1 || j == cols)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }
    return 0;
}

// Q22. A jewelry design tool generates hollow diamond outlines for patterns. Implement a solution to display a 
// hollow diamond pattern of *.
            
    //      *
    //    *   *
    //   *     *
    //  *       *
    // *         *
    //  *       *
    //   *     *
    //    *  *
    //     *
#include <iostream>
using namespace std;

int main() {
    int n = 4; 
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n - i; j++)
            cout << " ";
        for(int j = 1; j <= 2*i - 1; j++) {
            if(j == 1 || j == 2*i - 1)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }
    for(int i = n - 1; i >= 1; i--) {
        for(int j = 1; j <= n - i; j++)
            cout << " ";
        for(int j = 1; j <= 2*i - 1; j++) {
            if(j == 1 || j == 2*i - 1)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }
    return 0;
}

// Q24. A typing practice app displays the alphabets in pyramid form. Implement a solution to display: 
// A
// AB
// ABC 
// ABCD 
// ABCDE
#include <iostream>
using namespace std;

int main() {
    int n = 5;
    for(int i = 1; i <= n; i++) {
        char ch = 'A';
        for(int j = 1; j <= i; j++) {
            cout << ch;
            ch++;
        }
        cout << endl;
    }
    return 0;
}
// Q-26)The school report card system stores subject marks for each student. 
// Implement a solution to accept marks in 5 subjects, compute the total and percentage, and display the result.

#include <iostream>
using namespace std;

int main() {
    int marks[5];
    int total = 0;
    float percentage;

    cout<<"enter marks of 5 subjects:\n";
    for (int i = 0; i < 5; i++) {
        cout<< "Subject " << i + 1 << ": ";
        cin>> marks[i];
        total += marks[i];
    }
percentage = (total / 500.0) * 100;
cout<< "\nTotal Marks = " << total;
    cout<< "\nPercentage = " << percentage << "%";

    return 0;
}

// Q-27)A supermarket software maintains item price lists. Implement a solution to store the prices of 10 
// items in an array and display the maximum price.

#include <iostream>
using namespace std;

int main() {
    float price[10], maxPrice;
cout << "Enter prices of 10 items:\n";
cin >> price[0];
    maxPrice = price[0];
for (int i = 0; i < 10; i++) {
        cin >> price[i];
        if (price[i] > maxPrice)
            maxPrice = price[i];
    }
cout << "Maximum price is: " << maxPrice;
    return 0;
}

// Q-28)A data processing system classifies even and odd inputs separately. Implement a solution to 
// store 5 elements in an array, compute sum of all even and sum of all odd numbers.

#include <iostream>
using namespace std;

int main() {
    int arr[5];
    int evenSum=0, oddSum=0;
 cout << "Enter 5 integers:" << endl;
    for (int i = 0; i < 5; i++) 
{cin >> arr[i];
    }
    for (int i = 0; i < 5; i++) {
        if (arr[i] % 2 == 0) {
            evenSum += arr[i];
        } else {
            oddSum += arr[i];
        }
    }

    cout << "Sum of even numbers = " << evenSum << endl;
    cout << "Sum of odd numbers = " << oddSum << endl;

    return 0;
}

// Q-29)A weather monitoring app records 30-day temperature logs. Implement a solution to store daily 
// temperatures in an array and display the minimum temperature for the month. 

#include <iostream>
using namespace std;

int main() {
    int temp[30];

    cout << "enter temperatures for 30 days:\n";
    for (int i = 0; i < 30; i++) {
        cout <<"Day"<< i + 1 << ": ";
        cin >> temp[i];
    }
    int minTemp = temp[0];
    for (int i = 1; i < 30; i++) {
        if (temp[i] < minTemp) {
            minTemp = temp[i];
        }
    }
    cout << "\nMinimum temperature of the month: " << minTemp << "°C" << endl;

    return 0;
}

// Q-30) A payroll system maintains employee salary records. Implement a solution to accept salary of 
// 10 employees in an array, compute total salary and average salary, then display the result. 

#include <iostream>
using namespace std;

int main() {
    float salary[10];     
    float total = 0, average;

    cout << "Enter salary of 10 employees:\n";
    for (int i = 0; i < 10; i++) {
        cout << "Employee " << i + 1 << ": ";
        cin >> salary[i];
        total += salary[i];  
    }
    average = total / 10;
    cout << "\nTotal Salary = " << total;
    cout << "\nAverage Salary = " << average;

    return 0;
}
