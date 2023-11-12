#include <stdio.h>


int rainbow(char a[], int n) {

	int c = 0;
	
	int rain[7] = { 0,0,0,0,0,0,0 };
	int rRain[7] = { 0,0,0,0,0,0,0 };


	for (int i = 0; i < n; i++) {
			if (a[i] == 'r') rain[0]++;
			else if (a[i] == 'o') rain[1]++;
			else if (a[i] == 'y') rain[2]++;
			else if (a[i] == 'g') rain[3]++;
			else if (a[i] == 'b') rain[4]++;
			else if (a[i] == 'i') rain[5]++;
			else if (a[i] == 'v') rain[6]++;
	}

	for (int i = 0; i < n; i++) {
			if (a[i] == 'R') rRain[0]++;
			else if (a[i] == 'O') rRain[1]++;
			else if (a[i] == 'Y') rRain[2]++;
			else if (a[i] == 'G') rRain[3]++;
			else if (a[i] == 'B') rRain[4]++;
			else if (a[i] == 'I') rRain[5]++;
			else if (a[i] == 'V') rRain[6]++;
	}

	if (rain[0] >= 1 && rain[1] >= 1 && rain[2] >= 1 && rain[3] >= 1 && rain[4] >= 1 &&
		rain[5] >= 1 && rain[6] >= 1 && rRain[0] >= 1 && rRain[1] >= 1 && rRain[2] >= 1
		&& rRain[3] >= 1 && rRain[4] >= 1 && rRain[5] >= 1 && rRain[6] >= 1)
		return 3;

	else if (rain[0] >= 1 && rain[1] >= 1 && rain[2] >= 1 && rain[3] >= 1 && rain[4] >= 1 &&
		rain[5] >= 1 && rain[6] >= 1)
		return 1;

	else if (rRain[0] >= 1 && rRain[1] >= 1 && rRain[2] >= 1 && rRain[3] >= 1 && rRain[4] >= 1 &&
		rRain[5] >= 1 && rRain[6] >= 1)
		return 2;

	else
		return 4;

}


int main(void){
	char a[101] = { 0 };
	int n = 0;

	scanf("%d", &n);

	scanf("%s", a);

	int c = rainbow(a, n);
	
	if (c == 1)
		printf("yes");
	else if (c == 2)
		printf("YES");
	else if (c == 3)
		printf("YeS");
	else if (c == 4)
		printf("NO!");

	return 0;
}