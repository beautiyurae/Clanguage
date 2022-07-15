// 서기 *y년 *m월 *d일의 날짜를 '전날' 또는 '다음날' 날짜로 변경하는 함수를 작성하라.
// void decrement_date(int *y, int *m, int *d) { }
// void decrement_date(int *y, int *m, int *d) { }
// 윤년을 고려하여 계산한다.

#include <stdio.h>
int is_leap(int y) {
	return (y % 4 == 0 && y % 100 != 0 || y % 400 == 0); // 평년 : 0, 윤년 : 1반환
}

int days_of_month(int y, int m) {
	int mdays[][12] = {
		{ 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}, // 평년
		{ 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}, // 윤년
	};
	return mdays[is_leap(y)][m - 1];
}

void decrement_date(int* y, int* m, int* d) {
	if (*d > 1)
		--* d;
	else {
		if (-- * m < 1) {
			--* y;
			*m = 12;
		}
		*d = days_of_month(*y, *m);
	}
}

void increment_date(int* y, int* m, int* d) { 
	if (*d < days_of_month(*y, *m))
		++* d;
	else {
		if (++ * m > 12) {
			++* y;
			*m = 1;
		}
		*d = 1;
	}
}

int main(void) {
	int i, n;
	int y, m, d;
	printf("날짜를 입력해주세요.\n");
	printf("연 : "); scanf("%d", &y);
	printf("월 : "); scanf("%d", &m);
	printf("일 : "); scanf("%d", &d);

	printf("며칠 뒤로 할까요 : "); scanf("%d", &n);
	for (i = 0; i < n; i++) {
		decrement_date(&y, &m, &d);
	}
	printf("%d년 %d월 %d일이 되었습니다.\n", y, m, d);
	printf("며칠 앞으로 할까요 : "); scanf("%d", &n);
	for (i = 0; i < n; i++) {
		increment_date(&y, &m, &d);
	}
	printf("%d년 %d월 %d일이 되었습니다.\n", y, m, d);
	return 0;

}