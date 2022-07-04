// 문자열 s안에 문자 c가 포함됐으면 그 첨자(문자열 안에 문자 ch가 여러 개일 때는 가장 앞쪽의 첨자로 함) 를 반환하고, 없으면 -1을 반환하는 함수를 작성하라.
// int str_char(const char s[], int c)
#include <stdio.h>

int str_char(const char s[], int c) {
	for (int i = 0; s[i] != '\0'; i++) {
		if (s[i] == c)
			return i;
	}
	return -1;
}

int main(void) {
	char ch[10];
	int no;

	printf("영문자를 입력해주세요 : ");
	scanf("%s", ch);

	no = str_char("ABCDEFGHIJKLMNOPQRSTUVWXYZ"
		"abcdefghijklmnopqrstuvwxyz", ch[0]);

	if (no >= 0 && no <= 25) {
		printf("이는 대문자 %d번째입니다.\n", no + 1);
	}
	else if (no >= 26 && no <= 51) {
		printf("이는 소문자 %d번째 입니다.\n", no - 25);
	}
	else
		printf("이는 영문자가 아닙니다.\n");
	return 0;
}