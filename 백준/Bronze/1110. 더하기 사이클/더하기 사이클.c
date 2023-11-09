#include <stdio.h>
#include <string.h>


int plus(char s[], char a[], int* i) {

	char n[3] = { 0 };
	int m = 0;

	if (strlen(a) < 2) {
		a[1] = a[0];
		a[0] = '0';
	}
	
	// printf("변환된 a: %s\n", a);

	// printf("a[0]: %d\n", a[0] - '0'); // 1은 아스키코드로 49
	// printf("a[1]: %d\n", a[1] - '0'); // 2는 아스키코드로 50
	
	m = (a[0] - '0') + (a[1] - '0'); // 문자를 숫자로 변환

	// printf("m값: %d\n", m);

	n[0] = a[1];
	n[1] = '0' + (m % 10);
	n[2] = '\0'; 

	if (n[0] == s[0] && n[1] == s[1]) // 문자열 비교는 ==로 불가
		return *i;
	else
	{
		(*i)++;
		plus(s, n, i); // 재귀호출은 &i 대신 i 전달
	}
}


int main(void) {
	char a[3] = { 0 };

	scanf("%s", a);

	int i = 1;

	printf("%d", plus(a, a, &i));
}
