#include <iostream>
using namespace std;

int main() {
   ios::sync_with_stdio(false); // Fast I/O
    cin.tie(NULL);               // Untie cin/cout
     // Note: There are no errors in lines 4 and 5
    // Lines 4 and 5 used to make input and output faster.
    int T, N, x;
    cin >> T;
    while (T--) {
        cin >> N;
        int alive[500000];
        int size = 0;
        for (int i = 0; i < N; i++) {
            cin >> x;
            while (size > 0 && alive[size - 1] <= x)
                size--;
            alive[size++] = x;
            cout << size;
            if (i < N - 1) cout << " ";
        }
        cout << '\n';
    }
    return 0;
}