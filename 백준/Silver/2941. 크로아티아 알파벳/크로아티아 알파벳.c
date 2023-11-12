#include <stdio.h>
#include <string.h>


int main() {
	char a[101] = { 0 };
	scanf("%s", a);

	int count = 0;
	int len = strlen(a); // 변수로 저장해서 사용

	for (int i = 0; i < len;) {
		if (a[i] == 'c' && a[i + 1] == '=') { // strcmp는 단일 문자 비교에 사용X
			count += 1;
			i += 2;
			continue; // 다음 i
		}
		else if (a[i] == 'c' && a[i + 1] == '-') {
			count += 1;
			i += 2;
			continue;
		}
		else if (a[i] == 'd' && a[i + 1] == 'z' && a[i + 2] == '=') {
			count += 1;
			i += 3;
			continue;
		}
		else if (a[i] == 'd' && a[i + 1] == '-') {
			count += 1;
			i += 2;
			continue;
		}
		else if (a[i] == 'l' && a[i + 1] == 'j') {
			count += 1;
			i += 2;
			continue;
		}
		else if (a[i] == 'n' && a[i + 1] == 'j') {
			count += 1;
			i += 2;
			continue;
		}
		else if (a[i] == 's' && a[i + 1] == '=') {
			count += 1;
			i += 2;
			continue;
		}
		else if (a[i] == 'z' && a[i + 1] == '=') {
			count += 1;
			i += 2;
			continue;
		}
		else {
			count += 1;
			i += 1;
		}
	}

	printf("%d", count);

	return 0;
}