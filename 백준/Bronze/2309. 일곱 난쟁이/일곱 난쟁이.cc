#include <iostream>
#include <algorithm>

using namespace std;


int main() {
    int a[9] = { 0 };

    for (int i = 0; i < 9; i++) {
        cin >> a[i];
    }

    int b[7] = { 0 };

    for (int i = 0; i < 9; i++) {
        for (int j = i+1; j < 9; j++) {
            for (int k = j+1; k < 9; k++) {
                for (int l = k+1; l < 9; l++) {
                    for (int m = l+1; m < 9; m++) {
                        for (int n = m+1; n < 9; n++) {
                            for (int o = n+1; o < 9; o++) {
                                if (a[i] + a[j] + a[k] + a[l] + a[m] + a[n] + a[o] == 100) {
                                    b[0] = a[i];
                                    b[1] = a[j];
                                    b[2] = a[k];
                                    b[3] = a[l];
                                    b[4] = a[m];
                                    b[5] = a[n];
                                    b[6] = a[o];
                                }
                            }
                        }
                    }
                }
            }
        }
    }

    sort(b, b + 7);

    for (int i = 0; i < 7; i++) {
        cout << b[i] << endl;
    }

    return 0;
}