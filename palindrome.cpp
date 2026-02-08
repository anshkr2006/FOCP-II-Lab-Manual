// Q125- LEETCODE VALID PALINDROME

#include <iostream>
#include <string>
#include <cctype>
using namespace std;

bool isPalindrome(string s)
{
    int i = 0;
    int j = s.length() - 1;

    while(i < j)
    {
        if(!isalnum(s[i]))
            i++;
        else if(!isalnum(s[j]))
            j--;
        else if(tolower(s[i]) != tolower(s[j]))
            return false;
        else
        {
            i++;
            j--;
        }
    }
    return true;
}

int main()
{
    string s;
    cout << "Enter string: ";
    getline(cin, s);

    if(isPalindrome(s))
        cout << "Palindrome hai";
    else
        cout << "Palindrome nahi hai";

    return 0;
}
