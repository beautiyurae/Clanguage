// ���ڿ� s�ȿ� ���� c�� ���Ե����� �� ÷��(���ڿ� �ȿ� ���� ch�� ���� ���� ���� ���� ������ ÷�ڷ� ��) �� ��ȯ�ϰ�, ������ -1�� ��ȯ�ϴ� �Լ��� �ۼ��϶�.
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

	printf("�����ڸ� �Է����ּ��� : ");
	scanf("%s", ch);

	no = str_char("ABCDEFGHIJKLMNOPQRSTUVWXYZ"
		"abcdefghijklmnopqrstuvwxyz", ch[0]);

	if (no >= 0 && no <= 25) {
		printf("�̴� �빮�� %d��°�Դϴ�.\n", no + 1);
	}
	else if (no >= 26 && no <= 51) {
		printf("�̴� �ҹ��� %d��° �Դϴ�.\n", no - 25);
	}
	else
		printf("�̴� �����ڰ� �ƴմϴ�.\n");
	return 0;
}