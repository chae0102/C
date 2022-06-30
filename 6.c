#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*미심쩍은 계산기 문제

입력 받은 n1, n2의 숫자를 뒤집어 두 숫자를 더함
(1 <= n1, n2 <= 100,000)
뒤집은 두 정수 n1, n2의 합을 구한 뒤

최종 결과가 2자리 이하가 될때까지 각 자리수를 곱한다.
최종 결과가 2자리 이하라면 바로 출력

단 자리수 값이 0인 경우 곱하지 않음 (207 => 2 x 7)
*/
/*
int reverse(int x);
int count1(int y);

int main() {

	int t;
	int n1, n2;
	int mul;

	scanf("%d", &t);

	while (t--) {
		n1 = 0, n2 = 0;
		int count = 0;
		scanf("%d %d", &n1, &n2);

		n1 = reverse(n1);
		n2 = reverse(n2);

		int n = n1 + n2;
		//int sumn = n;
		//printf("%d + %d : %d\n",n1, n2, n);

		count = count1(n);
		//printf("count : %d\n", count);

			if (count <= 2) {
				printf("%d\n", n);
			}
			else if (count > 2) {
				//printf("과연\n");
				mul = multi(n);
				//printf("1: %d\n", mul);
				count = count1(mul);
				//printf("2: %d\n", count);

				while (count > 2) {
					if (count > 2) {
						mul = multi(mul);
						count = count1(mul);
					}
				}
				printf("%d\n", mul);
			}
	}
	return 0;
}
int reverse(int x) {
	int r = 0;
	while (x) {
		r = (r * 10) + (x % 10);
		x = x / 10;
	}
	return r;
}

int count1(int y) {
	int count = 0;
	while (1) {
		y /= 10;
		count++;
		if (!y)
			break;
	}
	return count;
}

int multi(int z) {
	int mul = 1;
	while (z != 0) {
		int a = 0;
		a = z % 10;
		if (a == 0)
			a = 1;
		mul *= a;
		z = z / 10;
	}
	return mul;
}*/

//1291 이상한 계산기
int sum1(intx);

int main() {
	int t, x, y;
	scanf("%d", &t);

	while (t--) {

		scanf("%d %d", &x, &y);
		int sumX = sum1(x);
		//printf("%d", sum);
		int sumY = sum1(y);

		int sum = sumX + sumY;
		sum = sum1(sum);
		printf("%d\n", sum);

	}
}

int sum1(int x) {
	int sum = 0;
	int a = 0;
	while (x) {
		a = x % 10;
		x = x / 10;
		sum += a;
	}
	return sum;
}