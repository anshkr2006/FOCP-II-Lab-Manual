// CALL BY VALUE
#include <iostream>
using namespace std;

void change(int x) {
    x = 50;
}

int main() {
    int a = 10;
    change(a);
    cout << a;
    return 0;
}

// CALL BY REFERENCE
#include <iostream>
using namespace std;

void change(int &x) {
    x = 50;
}

int main() {
    int a = 10;
    change(a);
    cout << a;
    return 0;
}

// CALL BY ADDRESS
#include <iostream>
using namespace std;

void change(int *x) {
    *x = 50;
}

int main() {
    int a = 10;
    change(&a);
    cout << a;
    return 0;
}