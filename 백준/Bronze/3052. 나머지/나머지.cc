#include <iostream>
using namespace std;

int main() {
    int a[10];
    int count = 0;

    for (int i = 0; i < 10; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < 10; i++) {
        a[i] %= 42;
        if (a[i] == 0)
            a[i] = 42;
    }
    int b[43] = { 0 };

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 43; j++) {
            if (a[i] != b[j])
                b[a[i]] = 1;
        }
    }
    for (int i = 0; i < 43; i++) {
        if (b[i])
            count += 1;
    }

    cout << count << endl;
}