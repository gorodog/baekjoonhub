#include <stdio.h>
#include <string.h>

int main(void)
{
    char arr[50][51] = {0};
    int n = 0;
    int m = 0;
    
    scanf("%d %d", &n, &m);

    for (int i = 0; i < n; i++) {
        scanf("%s", &arr[i]);
    }
    
    // 행
    int count_r = 0;
    for (int i = 0; i < n; i++)
        if (strchr(arr[i], 'X') == NULL) { // X가 없으면
            count_r++;
        }
    // 열
    int count_l = 0;
    for (int i = 0; i < m; i++) {
        int count_p = 0;
        for (int j = 0; j < n; j++) {
            if (arr[j][i] == 'X') {
                count_p++;
            }
        }
        if (count_p > 0)
            count_l++;
    }
    // 최소 경비원
    int count = 0;
    if (count_r >= (m - count_l))
        count = count_r;
    else
        count = (m - count_l);

    printf("%d", count);

    return 0; 
}