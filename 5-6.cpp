// 대입 후의 변숫값 출력
#include <stdio.h>

int main(void) {

	double a;
	int b;

	a = b = 1.5; // = 대입연산자는 오른쪽부터 수행 a = (b = 1.5), a = 1.0이 됨
	             // 대입 대사의 변수 자료형이 다를 때는 주의가 필요함
	printf("a = %.1f b = %d\n", a, b);
	return 0;
}