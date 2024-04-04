#include <stdio.h>
#include <stdlib.h>

int h[1001];
int t[1001];

int tnfl(const void *a, const void *b){
	int num1 = *(int *)a;
	int num2 = *(int *)b;
	if (num1 < num2)
		return -1;
	if (num1 > num2)
		return 1;
	return 0;
}

int main(){
	int n, l;
	int c = 0;
	scanf("%d %d", &n, &l);
	for (int a = 0; a < n; a++){
		scanf("%d", &h[a]);
	}
	qsort(h, n, sizeof(int), tnfl);
	for (int a = 0; a < n; a++){
		if (t[h[a]] == 0){
			for (int b = 0; b < l; b++)
				t[h[a]+b]= 1;
			c++;
		}
	}
	printf("%d\n", c);
}
