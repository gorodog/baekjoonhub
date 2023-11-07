#include <stdio.h>
#include <string.h>

int main(void)
{
	char a[101] = { 0 };

	scanf("%s", a);

	printf("%zd", strlen(a));

	return 0;
}