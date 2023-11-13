#include <iostream>
using namespace std;

int main() {
    int a, b, c, d;
    cin >> a >> b >> c;
    d = a * b * c;

    int num[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    int count[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
    for (int i = 1; i < d; ) {
        for (int j = 0; j < 10; j++) { //17037300
            if ((d / i) % 10 == num[j]) {
                count[j] += 1;
            }
        }
        i *= 10;
    }
    for (int i = 0; i < 10; i++) {
        cout << count[i]  << endl;
    }
}