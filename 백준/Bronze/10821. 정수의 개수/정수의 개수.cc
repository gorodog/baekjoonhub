#include <iostream>

using namespace std;

int main() {
    string s;
    cin >> s;
    int len = s.length();
    int count = 1;
    for (int i = 0; i < len; i++) {
        if (s[i] == ',')
            count += 1;
    }
    cout << count << endl;
    return 0;
}