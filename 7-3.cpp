// 문자형과 정수형의 크기 출력
#include <stdio.h>
#include <limits.h>

int main(void) {
	printf("char형은 %u바이트 \n", (unsigned)sizeof(char));
	printf("short형은 %u바이트 \n", (unsigned)sizeof(short));
	printf("int형은 %u바이트 \n", (unsigned)sizeof(int));
	printf("long형은 %u바이트 \n", (unsigned)sizeof(long));

	return 0;
}