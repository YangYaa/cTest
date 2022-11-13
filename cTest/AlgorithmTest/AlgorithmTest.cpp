#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void printDigitNum() {
	int i, j = 0;
	int k = 1000;
	//正序输出,有局限性，只能判断千位数
	scanf("%d", &i);
	while (i != 0) {
		j = i / k % 10;
		i = i - j * k;
		k = k / 10;
		printf("%d\n", j);
	}
	//倒序输出
	scanf("%d", &i);
	while (i != 0) {
		printf("%d\n", i % 10);
		i = i / 10;
	}
}

int main() {
	printDigitNum();//正序反序输出对应位
	return 0;
}