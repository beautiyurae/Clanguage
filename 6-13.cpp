// ���� Ž��(���� Ž��)
#include <stdio.h>
#define NUMBER 5
#define FAILED -1

int searchr(const int v[], int key, int n) {
	for (int i = 0; i < n; i++) {
		if (v[i] == key) {
			return i;
		}
	}
	return FAILED;
}
int main(void) {
	int i, ky, idx;  // ky ã�°�, idx ã�� ���� ��ȣ 
	int vx[NUMBER];
	for (i = 0; i < NUMBER; i++) {
		printf("vx[%d] : ", i); scanf_s("%d", vx[i]);
	}
	printf("ã�� �� : "); scanf_s("%d", &ky);
	if (idx = searchr(vx, ky, NUMBER) == FAILED)
		printf("\aŽ���� �����߽��ϴ�.\n");
	else
		printf("%d��(��) %d��°�� �ֽ��ϴ�.\n", ky, idx);
	return 0;
}