// n�� ����Ű�� ���� 0���� ������ 0���� �����ϰ� 100���� ũ�� 100���� �����ϴ�(���� 0~100�̸� �������� ����)�Լ� adjust_point�� �ۼ��϶�.
// int adjust_point(int *n) { }
#include <stdio.h>
int adjust_point(int* n) 
{ 
	if (*n < 0) *n = 0;
	if (*n > 100) *n = 100;
}

int main(void) 
{
	int point;

	printf("���� ���� : ");
	scanf("%d", &point);

	adjust_point(&point);
	printf("������ %d���Դϴ�.\n", point);

	return 0;
}