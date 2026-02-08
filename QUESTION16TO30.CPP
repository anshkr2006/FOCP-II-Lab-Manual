// Q-26)The school report card system stores subject marks for each student. 
// Implement a solution to accept marks in 5 subjects, compute the total and percentage, and display the result.

// #include <iostream>
// using namespace std;

// int main() {
//     int marks[5];
//     int total = 0;
//     float percentage;

//     cout<<"enter marks of 5 subjects:\n";
//     for (int i = 0; i < 5; i++) {
//         cout<< "Subject " << i + 1 << ": ";
//         cin>> marks[i];
//         total += marks[i];
//     }
// percentage = (total / 500.0) * 100;
// cout<< "\nTotal Marks = " << total;
//     cout<< "\nPercentage = " << percentage << "%";

//     return 0;
// }


// Q-27)A supermarket software maintains item price lists. Implement a solution to store the prices of 10 
// items in an array and display the maximum price.

// #include <iostream>
// using namespace std;

// int main() {
//     float price[10], maxPrice;
// cout << "Enter prices of 10 items:\n";
// cin >> price[0];
//     maxPrice = price[0];
// for (int i = 0; i < 10; i++) {
//         cin >> price[i];
//         if (price[i] > maxPrice)
//             maxPrice = price[i];
//     }
// cout << "Maximum price is: " << maxPrice;
//     return 0;
// }


// Q-28)A data processing system classifies even and odd inputs separately. Implement a solution to 
// store 5 elements in an array, compute sum of all even and sum of all odd numbers.

// #include <iostream>
// using namespace std;

// int main() {
//     int arr[5];
//     int evenSum=0, oddSum=0;
//  cout << "Enter 5 integers:" << endl;
//     for (int i = 0; i < 5; i++) 
// {cin >> arr[i];
//     }
//     for (int i = 0; i < 5; i++) {
//         if (arr[i] % 2 == 0) {
//             evenSum += arr[i];
//         } else {
//             oddSum += arr[i];
//         }
//     }

//     cout << "Sum of even numbers = " << evenSum << endl;
//     cout << "Sum of odd numbers = " << oddSum << endl;

//     return 0;
// }


// Q-29)A weather monitoring app records 30-day temperature logs. Implement a solution to store daily 
// temperatures in an array and display the minimum temperature for the month. 

// #include <iostream>
// using namespace std;

// int main() {
//     int temp[30];

//     cout << "enter temperatures for 30 days:\n";
//     for (int i = 0; i < 30; i++) {
//         cout <<"Day"<< i + 1 << ": ";
//         cin >> temp[i];
//     }
//     int minTemp = temp[0];
//     for (int i = 1; i < 30; i++) {
//         if (temp[i] < minTemp) {
//             minTemp = temp[i];
//         }
//     }
//     cout << "\nMinimum temperature of the month: " << minTemp << "°C" << endl;

//     return 0;
// }

// Q-30) A payroll system maintains employee salary records. Implement a solution to accept salary of 
// 10 employees in an array, compute total salary and average salary, then display the result. 

// #include <iostream>
// using namespace std;

// int main() {
//     float salary[10];     
//     float total = 0, average;

//     cout << "Enter salary of 10 employees:\n";
//     for (int i = 0; i < 10; i++) {
//         cout << "Employee " << i + 1 << ": ";
//         cin >> salary[i];
//         total += salary[i];  
//     }
//     average = total / 10;
//     cout << "\nTotal Salary = " << total;
//     cout << "\nAverage Salary = " << average;

//     return 0;
// }