// char형 배열 str에 문자열 "XYZ"를 저장하고 출력하는 프로그램

#include <stdio.h>
int main(void) {
	char str[] = "XYZ";
	// char str[] = { 'X', 'Y', 'Z', '\0' };
	printf("문자열 str은 \"%s\"입니다.\n", str);
	return 0;
}