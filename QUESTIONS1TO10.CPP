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

//  Q7-A game compares three players' scores to find who is ahead. Implement a solution to accept three scores 
// and identify the winner. 

// #include <iostream>
// using namespace std;

// int main()
// {   int score1, score2, score3;
//     cout << "Enter score of Player 1: ";
//     cin >> score1;
//     cout << "Enter score of Player 2: ";
//     cin >> score2;
//     cout << "Enter score of Player 3: ";
//     cin >> score3;
//     if (score1 > score2 && score1 > score3)
//     {
//         cout << "Player 1 is the winner";
//     }
//     else if (score2 > score1 && score2 > score3)
//     {
//         cout << "Player 2 is the winner";
//     }
//     else if (score3 > score1 && score3 > score2)
//     {
//         cout << "Player 3 is the winner";
//     }
//     else
//     {
//         cout << "It's a tie!";
//     }

//     return 0;
// }


// Q8- A monitoring system generates a sequence of numeric event IDs from 1 to N. 
// To make logs easier to analyse, the system applies tags to certain events based on predefined rules: 
// • Events whose ID is divisible by 3 are tagged as “Buzz” 
// • Events whose ID is divisible by 5 are tagged as “Fuzz” 
// • Events divisible by both 3 and 5 receive both tags

// #include <iostream>
// using namespace std;

// int main()
// {
//     int N;
//     cout << "Enter value of N: ";
//     cin >> N;
    // for(int i = 1; i <= N; i++)
//     {
//         if(i % 3 == 0 && i % 5 == 0)
//         {
//             cout << i << " BuzzFuzz";
//         } else if(i % 3 == 0)
//         {
//             cout << i << " Buzz";
//         } else if(i % 5 == 0)
//         {
//             cout << i << " Fuzz";
//         } else
//         {
//             cout << i;
//         }
//         cout << endl;
//     }
//  return 0;
// }


// Q9- A text editor auto-detects whether an input letter is a vowel, a consonant or a number. Implement a 
// solution to classify the symbol.

// #include <iostream>
// using namespace std;

// int main()
// {
//     char ch;
//     cout << "Enter a character: ";
//     cin >> ch;
//     if (ch >= '0' && ch <= '9')
//     {
//         cout << "It is a number";
//     }
//     else if (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' ||
//              ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
//     {
//         cout << "It is a vowel";
//     }
//     else if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
//     {
//         cout << "It is a consonant";
//     }
//     else
//     {
//         cout << "Invalid symbol";
//     }
//     return 0;
// }


// Q10-A calendar app calculates whether February has 29 days. Implement a solution to check if a year is a 
// leap year or not.

// #include <iostream>
// using namespace std;

// int main()
// {
//     int year;
//     cout << "Enter a year: ";
//     cin >> year;
//     if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
//     {
//         cout << "It is a leap year. February has 29 days.";
//     }
//     else
//     {
//         cout << "It is not a leap year. February has 28 days.";
//     }
//     return 0;
// }