// 88% 진행 -> 시간 초과 뜸



#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>


int plus(char a[]) {

	char s[3], n[3] = { 0 };
	int m, count = 0;

	strcpy(s, a);

	while (strcmp(n,s)!= 0) {
		if (strlen(a) < 2) {
			a[1] = a[0];
			a[0] = '0';
		}

		m = (a[0] - '0') + (a[1] - '0'); // 합, 문자 -> 숫자

		n[0] = a[1];
		n[1] = '0' + (m % 10); // 숫자 -> 문자
		n[2] = '\0'; // 새로운 수

		count++;

		a[0] = n[0];
		a[1] = n[1];
	}

	return count;
}


int main(void) {
	char a[3] = { 0 };

	scanf("%s", a);

	printf("%d", plus(a));
}
