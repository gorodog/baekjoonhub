#include <iostream>
using namespace std;

int main() {
    int n = 0;
    int a = 1000000;
    int* b = new int[a];

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }

    int max = -1000000;
    int min = 1000000;

    for (int i = 0; i < n; i++) {
        if (b[i] > max)
            max = b[i];
    }

    for (int i = 0; i < n; i++) {
        if (b[i] < min)
            min = b[i];
    }

    cout << min << " " << max << endl;

    return 0;
}

// 함수가 스택의 4000024바이트를 사용 
// > 데이터를 힙으로 옮기기 위해선 
// > 동적할당을 사용해야함