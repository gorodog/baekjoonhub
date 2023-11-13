#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n = 0;
    int a[1000] = { 0 };

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    sort(a, a + n); // 포인터, 포인터+1000

    for (int i = 0; i < n; i++) {
        cout << a[i] << endl;
    }

    return 0;
}