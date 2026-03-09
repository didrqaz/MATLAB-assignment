#pragma warning(disable:4996)
#include <stdio.h>

int main() {

	int n, m;//n = 설탕무게, m = 계산 무게
	int i, j;//반복문용
	int check = 0;//계산 무게가 설탕 무게와 같은지 체크
	scanf("%d", &n);
	for (i = n - n%5; i >= 0; i -= 5) {// i = 5의 배수, 점점 작아짐
		for (j = 0; j <= n; j += 3) {// j = 3의 배수, 점점 커짐
			m = i+j;
			if (n == m) {
				check = 1;
				break;
			}
			else if (n < m) break;
		}
		if (check) break;
	}
	if (check == 0) printf("-1");//만약 5와 3의 배수의 합으로 설탕 무게를 만들 수 없다면 -1 출력
	else printf("%d", i/5+j/3);//그밖엔 봉지 개수 출력

	return 0;

}

