#pragma warning(disable:4996)
#include <stdio.h>
#include <stdlib.h>

int main() {

	int n, m;
	int i, j;
	int check = 0;
	scanf("%d", &n);
	for (i = n - n%5; i >= 0; i -= 5) {
		for (j = 0; j <= n; j += 3) {
			m = i+j;
			if (n == m) {
				check = 1;
				break;
			}
			else if (n < m) break;
		}
		if (check) break;
	}
	if (check == 0) printf("-1");
	else printf("%d", i/5+j/3);

	return 0;

}
