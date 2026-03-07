// Q31- A manufacturing QC system checks defect codes divisible by both 3 and 5.
// Implement a solution to store 5 elements in an array and count how many numbers are divisible by 3 and 5

#include <iostream>
using namespace std;

int main() {
    int arr[5];
    int count = 0;
    cout << "Enter 5 numbers: ";
    for(int i = 0; i < 5; i++) {
        cin >> arr[i];
    }
    for(int i = 0; i < 5; i++) {
        if(arr[i] % 3 == 0 && arr[i] % 5 == 0) {
            count++;
        }
    }
    cout << "Numbers divisible by both 3 and 5: " << count;
    return 0;
}

// Q32. A stock market app tracks first and second highest stock values. Implement a solution to find the largest
// and second largest number in an array of size 5.

#include <iostream>
using namespace std;

int main() {
    int arr[5];
    cout << "Enter 5 numbers:\n";
    for(int i = 0; i < 5; i++) {
        cin >> arr[i];
    }
    int largest = arr[0];
    int secondLargest = arr[0];
    for(int i = 1; i < 5; i++) {
        if(arr[i] > largest) {
            largest = arr[i];
        }
    }
    for(int i = 0; i < 5; i++) {
        if(arr[i] > secondLargest && arr[i] < largest) {
            secondLargest = arr[i];
        }
    }
    cout << "Largest number = " << largest << endl;
    cout << "Second largest number = " << secondLargest << endl;

    return 0;
}

// Q33. A grading system stores marks of multiple students in arrays. Implement a solution to accept marks in 5 subjects for 3 students, then display
//  marks in 2nd subject of 1st student, and
//  marks in 5th subject of 3rd student.


#include <iostream>
using namespace std;

int main() {
    int marks[3][5];
    cout << "Enter marks for 3 students in 5 subjects:\n";
    for(int i = 0; i < 3; i++) {
        cout << "Student " << i + 1 << ":\n";
        for(int j = 0; j < 5; j++) {
            cout << "Subject " << j + 1 << ": ";
            cin >> marks[i][j];
        }
    }
    cout << "\nMarks in 2nd subject of 1st student: " << marks[0][1] << endl;
    cout << "Marks in 5th subject of 3rd student: " << marks[2][4] << endl;

    return 0;
}

// Q34. A graphics rendering engine adds pixel intensity matrices. Implement a solution to store two
// 3×3 matrices and compute their sum
#include <iostream>
using namespace std;

int main() {
    int A[3][3], B[3][3], Sum[3][3];
    cout << "Enter elements of first 3x3 matrix:\n";
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cin >> A[i][j];
        }
    }
    cout << "Enter elements of second 3x3 matrix:\n";
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cin >> B[i][j];
        }
    }
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            Sum[i][j] = A[i][j] + B[i][j];
        }
    }
    cout << "\nSum of the matrices:\n";
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cout << Sum[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}

// Q35- A data analytics tool flips rows and columns for better visualization. Implement a solution to
// store a 3×3 matrix and compute its transpose.
#include <iostream>
using namespace std;

int main() {
    int A[3][3], T[3][3];
    cout << "Enter elements of 3x3 matrix:\n";
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cin >> A[i][j];
        }
    }
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            T[j][i] = A[i][j];
        }
    }
    cout << "\nTranspose of the matrix:\n";
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cout << T[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}

// Q36. A machine learning model multiplies matrices for neural network layers. Implement a solution
// to multiply two matrices of order m×n and p×q (if valid).

#include <iostream>
using namespace std;
int main() {
    int m, n, p, q;
    cout << "Enter rows and columns of first matrix (m n): ";
    cin >> m >> n;
    cout << "Enter rows and columns of second matrix (p q): ";
    cin >> p >> q;
    if(n != p) {
        cout << "Matrix multiplication not possible.";
        return 0;
    }
    int A[m][n], B[p][q], C[m][q];
    cout << "Enter elements of first matrix:\n";
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            cin >> A[i][j];
        }
    }
    cout << "Enter elements of second matrix:\n";
    for(int i = 0; i < p; i++) {
        for(int j = 0; j < q; j++) {
            cin >> B[i][j];
        }
    }
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < q; j++) {
            C[i][j] = 0;
        }
    }
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < q; j++) {
            for(int k = 0; k < n; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    cout << "\nResultant Matrix:\n";
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < q; j++) {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}

// Q37. A registration system rejects usernames that contain spaces or special characters. Write a C++ 
// program to validate whether a given string can be accepted as a username.
#include <iostream>
#include <cctype>
using namespace std;
int main() {
    string username;
    bool valid = true;
    cout << "Enter username: ";
    cin >> username;
    for(int i = 0; i < username.length(); i++) {
        if(!isalnum(username[i])) {  
            valid = false;
            break;
        }
    }
    if(valid)
        cout << "Username accepted.";
 else
        cout << "Username rejected.";

    return 0;
}

// Q39. In software applications such as data analytics and probability systems, combinatorial values are frequently 
// required. To ensure efficiency, developers avoid factorial-based solutions and use iterative logic with loops.
// As a Junior Software Developer, design a C++ program to generate Pascal’s Triangle for a given number of rows.
#include <iostream>
using namespace std;

int main() {
    int rows;
    cout << "Enter number of rows: ";
    cin >> rows;
    for(int i = 0; i < rows; i++) {
        int num = 1;
        for(int j = 0; j <= i; j++) {
            cout << num << " ";
            num = num * (i - j) / (j + 1);
        }
        cout << endl;
    }
    return 0;
}

// Q40. A content-management system receives user-entered text that may contain inconsistent spacing, mixed 
// letter cases, and invalid characters.
// For reliable storage and processing, the system must normalize and validate the input string.
// Develop a C++ program that performs the following tasks on a given input string:
// 1. Remove leading, trailing, and extra spaces between words
// 2. Convert the string to sentence case (first character uppercase, remaining lowercase)
// 3. Count and display:
// o Total number of words
// o Total number of digits
// o Total number of special characters
// 4. Validate that the final string contains only alphabets, digits, and spaces
// Display appropriate messages based on the validation result

#include <iostream>
#include <string>
#include <cctype>
using namespace std;
int main() {
    string str;
    int words = 0, digits = 0, special = 0;
    bool valid = true;
    cout << "Enter a string: ";
    getline(cin, str);
    if(str.length() > 0)
        str[0] = toupper(str[0]);
    for(int i = 1; i < str.length(); i++)
        str[i] = tolower(str[i]);
    for(int i = 0; i < str.length(); i++) {
        if(str[i] == ' ')
            words++;
        else if(isdigit(str[i]))
            digits++;
        else if(!isalnum(str[i]) && str[i] != ' ') {
            special++;
            valid = false;
        }
    }
    words = words + 1; 
    cout << "\nSentence case string: " << str << endl;
    cout << "Total words: " << words << endl;
    cout << "Total digits: " << digits << endl;
    cout << "Total special characters: " << special << endl;
    if(valid)
        cout << "String is valid." << endl;
    else
        cout << "String contains invalid characters." << endl;
    return 0;
}