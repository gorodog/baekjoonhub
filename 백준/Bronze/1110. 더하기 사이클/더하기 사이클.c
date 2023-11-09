#include <stdio.h>
#include <string.h>


int plus(char s[], char a[], int* i) {

	char n[3] = { 0 };
	int m = 0;

	if (strlen(a) < 2) {
		a[1] = a[0];
		a[0] = '0';
	}

	m = (a[0] - '0') + (a[1] - '0');

	n[0] = a[1];
	n[1] = '0' + (m % 10);
	n[2] = '\0'; 

	if (n[0] == s[0] && n[1] == s[1])
		return *i;
	else
	{
		(*i)++;
		plus(s, n, i);
	}
}


int main(void) {
	char a[3] = { 0 };

	scanf("%s", a);

	int i = 1;

	printf("%d", plus(a, a, &i));
}