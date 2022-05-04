//// 0.0부터 1.0까지 0.01단위로 반복하여 합계를 구함 (float을 이용한 반복)
//#include <stdio.h>
//int main(void) {
//	float x, sum = 0.0;
//
//	for (x = 0.0; x <= 1.0; x += 0.01) {
//		sum += x;
//	}
//
//	printf("0.00, 0.01, 0.02, ..., 1.00의 합계는 %f입니다.\n", sum);
//
//	return 0;
//}

// 0.0부터 1.0까지 0.01단위로 반복하여 합계를 구함 (int을 이용한 반복)
#include <stdio.h>
int main(void) {
	int i;
	float sum = 0.0;

	for (i = 0; i <= 100; i++) {
		sum += i / 100.0;
	}

	printf("0.00, 0.01, 0.02, ..., 1.00의 합계는 %f입니다.\n", sum);

	return 0;
}