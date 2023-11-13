#include <iostream>

using namespace std;

int main() {
    string s;
    string t = "abcdefghijklmnopqrstuvwxyz"; // 쌍따옴표 사용
    char v[26] = { 0 };
    cin >> s;
    int len = s.length();
    for (int i = 0; i < len; i++) {
        for (int j = 0; j < 26; j++) {
            if (s[i] == t[j])
                v[j] += 1;
        }
    }
    for (int i = 0; i < 26; i++)
        cout << 0 + v[i] << ' ';
    return 0;
}