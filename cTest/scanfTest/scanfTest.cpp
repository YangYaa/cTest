#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
//空白字符（空格、Tab、换行）
int main() {
	int i;
	char a;
	scanf("i = %d", &i);
	// 格式化字符串 中的 空格 会匹配任意多个(也包括0个)空白字符
	// 即使缓冲区中一个空白字符都没有，也不会因此出错
	printf("the i is %d\n", i);
	scanf("%c", &a); //读取缓存区中的空白字符
	scanf("%c ", &a);
	return 0;
}