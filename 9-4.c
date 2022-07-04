// 문자열 배열을 읽어 들여 출력하는 프로그램
// "$$$$$"를 읽어 들인 시점에 읽어 들이기를 중단하고 종료할 것
// "$$$$$"보다 앞서 입력한 모든 문자열을 출력할 것

#include <stdio.h>
#define NUM 10
int main(void) {
	int no;
	char s[NUM][128];

	no = NUM;
	printf("%d개의 문자열을 입력하라(\"$$$$$\"로 중단).\n", NUM);
	for (int i = 0; i < NUM; i++) {
		printf("s[%d] : ", i);
		scanf("%s", s[i]);
		if (s[i][0] == '$' && s[i][1] == '$' && s[i][2] == '$' && s[i][3] == '$' && s[i][4] == '$' && s[i][5] == '\0') {
			no = i;
			break;
		}
	}

	for (int i = 0; i < no; i++) {
		printf("s[%d] = \"%s\"\n", i, s[i]);		
	}
	return 0;
}