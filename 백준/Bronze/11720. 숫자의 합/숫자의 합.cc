#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

// https://rebro.kr/53
// https://comdolidol-i.tistory.com/151

using namespace std;


int main() {
    int a = 0;
    string s;

    cin >> a;
    cin >> s;

    int len = s.length();
    int total = 0;

    for (int i = 0; i < len; i++) {
        total += ((int)s[i] - 48);
    }
    cout << total << endl;
    return 0;
}
