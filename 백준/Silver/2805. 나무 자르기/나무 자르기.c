#include <stdio.h>
#include <stdlib.h>

long long arr[1000001] = { 0 };
long long cmp(long long* x, long long* y);

long long cmp(long long* x, long long* y) {
	if (*(long long*)x > *(long long*)y)
		return 1;
	else if (*(long long*)x < *(long long*)y)
		return -1;
	else
		return 0;
}

int main() {
	long long n = 0, m = 0;
	scanf("%lld %lld", &n, &m);
	for (int i = 0; i < n; i++) {
		scanf("%lld", &arr[i]);
	}
	qsort(arr, n, sizeof(long long), cmp);

	long long left = 1;
	long long right = arr[n-1];
	long long ans = 0;

	while (left <= right) {
		long long mid = left + (right - left) / 2;
		long long sum = 0;
		for (long long i = 0; i < n; i++) // m값을 넘는지 확인
			if (arr[i] > mid)
				sum += arr[i] - mid;
		if (sum >= m) {
			if (mid > ans) {
				ans = mid;
			}
			left = mid + 1; // 더 길게 자를 수 있는지 탐색
		}
		else if (sum < m) {
			right = mid - 1; // m개 이상 자를 수 없기 때문에 길이를 줄임
		}
	}
	printf("%d", ans);
	return 0;
}