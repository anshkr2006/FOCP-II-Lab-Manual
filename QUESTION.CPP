//  QUESTION 1-A CASHIER WANTS NEEDS TO ADD TWO AMOUNTS ENTERED BY A CUSTOMER QUICKLY . IMPLEMENT A SOLUTION TO ACCEPT TWO NUMBER AND COMPUTE THEIR SUM
// #include <iostream>
// using namespace std;

// int main() {
//     int A1,A2, sum;
//     cout<<" enter amount 1"<<endl<<"enter amount 2"<<endl;
//     cin>>A1>>A2;
//     sum=A1+A2;
//     cout<< "The sum of the amount is:"<<sum<<endl;
//     return 0;
// }

// Q2- A TEACHER WANTS T0 FIND THE AVERAGE MARKS OF THREE STUDENTS TO DECIDE CLASS PERFORMANCE.IMPLEMENT A SOLN TO ACCEPT THREE NUMBERS AND COMPUTE THEIR AVERAGE.
// #include <iostream>
// using namespace std;

// int main() {
//     int S1,S2,S3,AVERAGE;
//     cout<<"enter student 1 marks"<<endl<<"enter student 2 marks"<<endl<<"enter student 3 marks"<<endl;
//     cin>>S1>>S2>>S3;
//     AVERAGE=S1+S2+S3/3;
//     cout<<"the average of the class is :"<<AVERAGE<<endl;
//     return 0;
// }


// Q3-AN ARCHITECT WANTS TO CALCULATE THE SPACE COVERED BY A CIRCULAR FOUNTAIN. IMPLEMENT A SOLN. TO COMPUTE THE AREA OF CIRCLE
// #include <iostream>
// using namespace std;

// int main() {
//     float A,r,pi;
//     cout<<"enter radius of circle"<<endl;
//     cin>>r;
//     pi=3.14;
//     A=pi*r*r;
//     cout<<"the area of circle is :"<<A<<endl;
    
    
//     return 0;
// }


// Q4-A weather app developer needs to provide both Celsius and Fahrenheit readings. Implement a solution to 
// convert Fahrenheit temperature into Centigrade or vice versa. 

// #include <iostream>
// using namespace std;

// int main() {
//     int f ,c;
//     cout<<"enter temperature in fahrenheit:";
//     cin>>f;
//     c=(f-32)*5/9;
//     cout<<"temperature in centigrate is:"<<c<<endl;
    
//     return 0;
// }

//  Q5-A shopkeeper wants to calculate the total bill amount after applying a 20% discount on the purchase. 
// Implement a solution to accept item no., quantity, and unit price. Compute the amount and apply 20% discount. 

// #include <iostream>
// using namespace std;

// int main() {
//     int a,b,c,total,discount;
//     cout<<"enter total item no.: \n enter quantity\n enter unit price";
//     cin>>a>>b>>c;
//     total=b*c;
//     cout<<"total amount before the discount is :"<<total<<endl;
//     discount=total-(total*0.2);
//     cout<<"total amount after the discount is:"<<discount<<endl;

//     return 0;
// }


// Q6-A student wants to swap the values of two variables for practising coding basics. 
// Implement a solution to swap two numbers using different techniques.

// METHOD 1-

// #include <iostream>
// using namespace std;

// int main() {
//     float x,y;
//     cout<<"ENTER THE VALUE OF X AND Y";
//     cin>>x>>y;
//     cout<<"the value of x and y after swapping is :"<<y<<endl<<x<<endl;
//     return 0;
// }

// METHOD-2

// #include <iostream>
// using namespace std;

// int main() {
//     float x=12,y=11;
//     cout<<"the value of x and y is :"<<x<<" "<<y<<endl;
//     cout<<"the value of x and y after swapping is:"<<y<<" "<<x<<endl;
//     return 0;
// }


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