// Q1-
// #include<iostream>
// using namespace std;
// int main()
// {  int n;
//     cout<<"Enter number of terms: ";
//     cin>>n;
//     if(n <= 0)
//     {
//         cout<<"Invalid Input";
//         return 0;
//     }
//     int a = 0, b = 1, c;
//     cout<<a<<" "<<b<<" ";
//  for(int i = 2; i < n; i++)
//     {
//         c = a + b;
//         cout<<c<<" ";
//         a = b;
//         b = c;
//     }
//     return 0;
// }

 // Q2-
#include<iostream>
using namespace std;

int main()
{   int arr[5] = {1, 2, 2, 3, 1};
    for(int i = 0; i < 5; i++)
    {
        int count = 0;
        int k;
        for(k = 0; k < i; k++)
        {
            if(arr[i] == arr[k])
                break;
        }
        if(k != i)
            continue;
        for(int j = 0; j < 5; j++)
        {
            if(arr[i] == arr[j])
                count++;
        }
        cout << arr[i] << " occurs " << count << " times\n";
    }
    return 0;
}

















