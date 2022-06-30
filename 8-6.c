// 성별이나 계절을 나타내는 열거체를 자유롭게 정의하고 이를 이용한 프로그램 작성

#include <stdio.h>
enum sex { Male, Female };
enum season {Spring, Summer, Autumn, Winter};

void print_sex(enum sex sex) {
	switch (sex) {
	case Male: printf("남자"); break;
	case Female: printf("여자"); break;
	}
}

void print_season(enum season season) {
	switch (season) {
	case Spring: printf("봄"); break;
	case Summer: printf("여름"); break;
	case Autumn: printf("가을"); break;
	case Winter: printf("겨울"); break;
	}
}

enum sex select_sex(void) {
	int temp;
	do {
		printf("0...남자  1...여자 : ");
		scanf("%d", &temp);
	} while (temp < Male || temp > Female);
	return temp;
}

enum season select_season(void) {
	int temp;
	do {
		printf("0...봄  1...여름  2...가을  3...겨울 ");
		scanf("%d", &temp);
	} while (temp < Spring || temp > Winter);
	return temp;
}

int main(void) {
	enum sex your_sex;
	enum season your_season;

	printf("당신의 성별 "); your_sex = select_sex();
	printf("태어난 계절 "); your_season = select_season();

	printf("당신은 "); print_sex(your_sex);
	printf("로, "); print_season(your_season);
	printf("에 태어났군요.\n");

	return 0;

}
