// 문자열 s를 빈 문자열로 만드는 함수를 작성하라.
// void null_string(char s[])

#include <stdio.h>

void null_string(char s[]) {
	s[0] = '\0';
}

int main(void) {
	char str[128];
	printf("문자열을 입력하세요 : ");
	scanf("%s", str);
	printf("문자열str은 \"%s\"입니다.\n", str);
	null_string(str);
	printf("문자열str을 빈 문자열 \"%s\"로 했습니다.\n", str);
	return 0;
}