#include <stdio.h>
#include <stdlib.h>

int cmp(const void *a , const void *b); 

typedef struct array
{
    int x;
    int y;
} ary;

int main(void) 
{ 
    int n = 0; 
    

    scanf("%d", &n);

    ary* arr = (ary*)malloc(sizeof(ary) * n);

    for (int i = 0; i < n; i++)
        scanf("%d %d", &arr[i].x, &arr[i].y);

    qsort(arr, n, sizeof(arr[0]), cmp);

    for (int i = 0; i < n; i++)
        printf("%d %d\n", arr[i].x, arr[i].y);

    free(arr);

    return 0; 
} 

int cmp(const void* a, const void* b)
{
    ary na = *(ary*)a;
    ary nb = *(ary*)b; // na, nb는 next_a, next_b의 줄임말
    if (na.x == nb.x)
        return na.y - nb.y; // x 좌표가 같은 경우 y 좌표 값 비교
    // na.y - nb.y > 0 인 경우 1, == 0 인 경우 0, < 0 인 경우 -1 반환
    else
        return na.x - nb.x; // x 좌표가 다른 경우 x 좌표 값 비교
}