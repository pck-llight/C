#include<stdio.h>

int main() {
	int n, i, sum = 1;

	printf("n을 입력해주세요!\n");
	scanf("%d", &n);

	for (i = 1; i <= n; i++) {
		sum *= i;
	}

	printf("n!은 %d입니다.", sum);

	return 0;
}
