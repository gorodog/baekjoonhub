#include <stdio.h>
#include <stdlib.h>

int compare(const void *a , const void *b); 

int main(void) 
{ 
    int n = 0; 
    int arr[1000] = {5,9,2,7,10,3,6,4,8,1}; 

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    qsort(arr, n, sizeof(arr[0]), compare); 

    for(int i = 0 ; i < n ; i++) 
        printf("%d\n", arr[i]);
    return 0; 
} 

int compare(const void *a , const void *b) 
{ 
     if( *(int*)a > *(int*)b )

        return 1;

    else if( *(int*)a < *(int*)b )

        return -1;

    else

        return 0;
}