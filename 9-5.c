// ���ڿ� s�� �� ���ڿ��� ����� �Լ��� �ۼ��϶�.
// void null_string(char s[])

#include <stdio.h>

void null_string(char s[]) {
	s[0] = '\0';
}

int main(void) {
	char str[128];
	printf("���ڿ��� �Է��ϼ��� : ");
	scanf("%s", str);
	printf("���ڿ�str�� \"%s\"�Դϴ�.\n", str);
	null_string(str);
	printf("���ڿ�str�� �� ���ڿ� \"%s\"�� �߽��ϴ�.\n", str);
	return 0;
}