//2���� ������ ��� ���ϱ�
#include <stdio.h>


int scan_int(void) {

	int temp;

	printf("������ : ");
	scanf_s("%d", &temp);

	return temp;
}

int ave_of(int a, int b) {

	return (a + b) / 2;
}

int main(void) {
	int n1 = scan_int();
	int n2 = scan_int();
	int n3 = scan_int();

	int ave;

	if ((ave = ave_of(n1, n2)) == 0) {
		printf("n1�� n2�� ��հ��� 0�Դϴ�.\n");
	}
	else if (ave > 0) {
		printf("n1�� n2�� ��հ��� �����, %d�Դϴ�.\n", ave);
	}
	else
		printf("n1�� n2�� ��հ��� ������, %d�Դϴ�.\n", ave);

	if ((ave = ave_of(n1, n3)) == 0) {
		printf("n1�� n3�� ��հ��� 0�Դϴ�.\n");
	}
	else if (ave > 0) {
		printf("n1�� n3�� ��հ��� �����, %d�Դϴ�.\n", ave);
	}
	else
		printf("n1�� n3�� ��հ��� ������, %d�Դϴ�.\n", ave);

	if ((ave = ave_of(n2, n3)) == 0) {
		printf("n2�� n3�� ��հ��� 0�Դϴ�.\n");
	}
	else if (ave > 0) {
		printf("n2�� n3�� ��հ��� �����, %d�Դϴ�.\n", ave);
	}
	else
		printf("n2�� n3�� ��հ��� ������, %d�Դϴ�.\n", ave);

	return 0;
}