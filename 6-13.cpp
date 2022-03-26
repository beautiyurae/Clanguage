// 선형 탐색(순차 탐색)
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
	int i, ky, idx;  // ky 찾는값, idx 찾는 값의 번호 
	int vx[NUMBER];
	for (i = 0; i < NUMBER; i++) {
		printf("vx[%d] : ", i); scanf_s("%d", vx[i]);
	}
	printf("찾는 값 : "); scanf_s("%d", &ky);
	if (idx = searchr(vx, ky, NUMBER) == FAILED)
		printf("\a탐색에 실패했습니다.\n");
	else
		printf("%d은(는) %d번째에 있습니다.\n", ky, idx);
	return 0;
}