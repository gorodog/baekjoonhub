#include <stdio.h>
#include <stdlib.h>

//전역변수 쪽이 스택이 더 커서 더 많은 값 입력 가능
int arr[100001] = { 0 };
int cmp(int* x, int* y);

int cmp(int* x, int* y) {
	if (*(int*)x > *(int*)y)
		return 1;
	else if (*(int*)x < *(int*)y)
		return -1;
	else
		return 0;
}

int main() {
	int n = 0, m = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	qsort(arr, n, sizeof(int), cmp);

	/*for (int i = 0; i < 5; i++) {
		printf("%d", arr[i]);
	}*/

	scanf("%d", &m);

	for (int i = 0; i < m; i++) {
		int x;
		scanf("%d", &x);

		int left = 0, right = n - 1;
		int flag = 0;
		while (left <= right) {
			int mid = left + (right - left) / 2;
			if (x > arr[mid])
				left = mid + 1;
			else if (x < arr[mid])
				right = mid - 1;
			else { // x == arr[mid]
				flag = 1;
				break;
			}
		}
		// printf("%d", flag);
		if (flag)
			printf("1\n");
		else
			printf("0\n");
	}
}