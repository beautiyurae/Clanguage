// 다음 문자열 s를 빈 문자열로 하려면 어떤 조작을 수행해야 하는지 나타내는 프로그램

#include <stdio.h>
int main(void) {
	char s[] = "ABC";
	char str[48];

	printf("문자열 str : ");
	scanf("%s", str);
	printf("문자열 s  는 \"%s\"입니다.\n", s);
	printf("문자열 str는 \"%s\"입니다.\n", str);

	s[0] = '\0';
	str[0] = '\0';
	printf("문자열 s  를 빈 문자열 \"%s\"로 했습니다.\n", s);
	printf("문자열 str를 빈 문자열 \"%s\"로 했습니다.\n", str);

	return 0;
}