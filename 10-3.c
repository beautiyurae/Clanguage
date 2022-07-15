// ������ n1, n2, n3�� ����Ű�� 3���� int�� ������ ������������ �����ϴ� �Լ��� �ۼ��϶�.
// void sort3(int* n1, int* n2, int* n3) { }
#include <stdio.h>

void swap(int* px, int* py) {
	int temp = *px;
	*px = *py;
	*py = temp;
}

void sort3(int* n1, int* n2, int* n3) {
	if (*n1 > *n2) swap(n1, n2);
	if (*n2 > *n3) swap(n2, n3);
	if (*n1 > *n3) swap(n1, n3);
}

int main(void) {
	int na, nb, nc;
	printf("3���� ������ �Է����ּ���.\n");
	printf("���� A : "); scanf("%d", &na);
	printf("���� B : "); scanf("%d", &nb);
	printf("���� C : "); scanf("%d", &nc);

	sort3(&na, &nb, &nc);

	printf("������������ �����߽��ϴ�.\n");
	printf("���� A�� %d�Դϴ�.\n", na);
	printf("���� B�� %d�Դϴ�.\n", nb);
	printf("���� C�� %d�Դϴ�.\n", nc);

	return 0;
}