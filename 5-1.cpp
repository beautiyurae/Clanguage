// �迭�� �� ��ҿ� �տ������� ������� 0,1,2,3,4�� �����ϰ� ���

#include <stdio.h>

int main(void) {
	int i;
	int v[5];

	for (i = 0; i < 5; i++) {
		v[i] = i;
	}
	for (i = 0; i < 5; i++) {
		printf("v[%d] = %d\n", i, v[i]);
	}
	return 0;
}