// 요소 형이 int형이고 요소 개수가 n인 배열을 전달받아 모든 요소에 val을 대입하는 함수 ary_set를 작성하라.
// 또한 이 함수를 ary_set(&a[2], 2, 99)라고 호출했을 때의 실행 결과를 검토하라.
// void ary_set(int v[], int n, int val) { }

#include <stdio.h>

void ary_set(int v[], int n, int val) 
{
	int i;
	for (i = 0; i < n; i++) 
	{
		v[i] = val;
	}
}

int main(void)
{
	int i;
	int a[] = { 1, 2, 3, 4, 5 };

	ary_set(&a[2], 2, 99);

	for (i = 0; i < 5; i++)
	{
		printf("a[%d] = %d\n", i, a[i]);
	}
	return 0;
}
