// ���ڿ� �迭�� �о� �鿩 ����ϴ� ���α׷�
// "$$$$$"�� �о� ���� ������ �о� ���̱⸦ �ߴ��ϰ� ������ ��
// "$$$$$"���� �ռ� �Է��� ��� ���ڿ��� ����� ��

#include <stdio.h>
#define NUM 10
int main(void) {
	int no;
	char s[NUM][128];

	no = NUM;
	printf("%d���� ���ڿ��� �Է��϶�(\"$$$$$\"�� �ߴ�).\n", NUM);
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