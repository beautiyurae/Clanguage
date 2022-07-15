// n이 가리키는 값이 0보다 작으면 0으로 변경하고 100보다 크면 100으로 변경하는(값이 0~100이면 변경하지 않음)함수 adjust_point를 작성하라.
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

	printf("시험 점수 : ");
	scanf("%d", &point);

	adjust_point(&point);
	printf("점수를 %d점입니다.\n", point);

	return 0;
}