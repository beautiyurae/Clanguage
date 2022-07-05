// 배열 str을 다음과 같이 선언하고 문자열로 출력하는 프로그램을 작성하라.

#include <stdio.h>
int main(void) {
	char str[] = "ABC\0DEF";
	printf("문자열 str은 \"%s\"입니다.\n", str);
	return 0;
}
