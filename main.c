#include<stdio.h>

int main() {
        scanf("%d", &n);
        int sum = fac(n);
	printf("n!은 %d입니다.", sum);

	return 0;
}

int fac(int n){
        int sum = 1;

	printf("n을 입력해주세요!\n");

	for (int i = 1; i <= n; i++) {
		sum *= i;
	}
        return sum;
}
