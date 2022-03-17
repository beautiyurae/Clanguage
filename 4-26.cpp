// width개마다 줄 바꿈하면서 '+'와 '-' 출력
// 내가 만든 식 

#include <stdio.h>

int main(void) {

	int no, width;  // no : 갯수 
					// width : 줄 바꿈 할 갯수

	printf("몇 개를 출력할까요? : ");
	scanf_s("%d", &no);
	printf("몇 개마다 줄 바꿈할까요? : ");
	scanf_s("%d", &width);

	if (no > 0) {

		int i, j, k;
		int row;
		row = 1; // row : 행
		int remain;
		remain = no % width; // 찌꺼기

		for (i = 1; i <= no / width; i++) {

			if (row % 2 == 1) { // row가 홀수라면?

				for (j = 1; j <= width; j++) { // 7번반복 +
					if (j % 2 == 1) {
						printf("+");
					}
					else {
						printf("-");
					}
				}
				row++;
				printf("\n");
			}

			else { // row가 짝수

				for (k = 1; k <= width; k++) {
					if (k % 2 == 1) {
						printf("-");
					}
					else {
						printf("+");
					}
				}
				row++;
				printf("\n");
			}
		}
		if (remain > 0) {

			if (row % 2 == 1) {
				for (j = 1; j <= remain; j++) {
					if (j % 2 == 1) {
						printf("+");
					}
					else
						printf("-");
				}
			}
			else {
				for (k = 1; k <= remain; k++) {
					if (k % 2 == 1) {
						printf("-");
					}
					else
						printf("+");

				}
			}
		}


	}
	return 0;
}

/* 이해가 잘 안가는 책의 식

#include <stdio.h>
int main(void) {

	int no, width;

	printf("몇 개를 출력할까요? : ");
	scanf_s("%d", &no);
	printf("몇 개마다 줄 바꿈할까요? : ");
	scanf_s("%d", &width);

	if (no > 0) {

		int i, j;
		int rem = no % width;
		int wid = width / 2; // 열 수의 절반
		int odd = width % 2; // 열 수가 홀수인가?

		for (i = 1; i <= no / width / 2; i++) {
			for (j = 1; j <= wid; j++) {
				printf("+-");
			}
			if (odd) {
				printf("+");
			}
			printf("\n");

			for (j = 1; j <= wid; j++) {
				printf("-+");
			}
			if (odd) {
				printf("-");
			}
			printf("\n");
		}

		if (no / width % 2) {  // 아 그래서 이게 있구나 5 하고 1 넣으면 이런식이 필요해
			for (i = 1; i <= wid; i++) {
				printf("+-");
			}
			if (odd) {
				printf("+");
			}
			printf("\n");
		}
		if (rem > 0) {
			switch (no / width % 2) {
			case 0: for (j = 0; j < rem / 2; j++) {
				printf("+-");
			}
				  if (rem % 2) {
					  printf("+");
				  }
				  break;
			case 1: for (j = 0; j < rem / 2; j++) {
				printf("-+");
			}
				  if (rem % 2){
					  printf("-");
				  }
				  break;
			}
			printf("\n");
		}
	}
	return 0;
}*/