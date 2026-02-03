// hackerearth problem of favourite singer


// #include <iostream>
// using namespace std;

// int main() {
//     int N;
//     cin >> N;

//     int track[100] = {0};
//     int scode;
//     int maxFreq = 0;

//     for(int i = 0; i < N; i++) {
//         cin >> scode;
//         track[scode]++;
//         if(track[scode] > maxFreq) {
//             maxFreq = track[scode];
//         }
//     }

//     int count = 0;
//     for(int i = 0; i < 100; i++) {
//         if(track[i] == maxFreq) {
//             count++;
//         }
//     }

//     cout << count;
//     return 0;
// }