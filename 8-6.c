// �����̳� ������ ��Ÿ���� ����ü�� �����Ӱ� �����ϰ� �̸� �̿��� ���α׷� �ۼ�

#include <stdio.h>
enum sex { Male, Female };
enum season {Spring, Summer, Autumn, Winter};

void print_sex(enum sex sex) {
	switch (sex) {
	case Male: printf("����"); break;
	case Female: printf("����"); break;
	}
}

void print_season(enum season season) {
	switch (season) {
	case Spring: printf("��"); break;
	case Summer: printf("����"); break;
	case Autumn: printf("����"); break;
	case Winter: printf("�ܿ�"); break;
	}
}

enum sex select_sex(void) {
	int temp;
	do {
		printf("0...����  1...���� : ");
		scanf("%d", &temp);
	} while (temp < Male || temp > Female);
	return temp;
}

enum season select_season(void) {
	int temp;
	do {
		printf("0...��  1...����  2...����  3...�ܿ� ");
		scanf("%d", &temp);
	} while (temp < Spring || temp > Winter);
	return temp;
}

int main(void) {
	enum sex your_sex;
	enum season your_season;

	printf("����� ���� "); your_sex = select_sex();
	printf("�¾ ���� "); your_season = select_season();

	printf("����� "); print_sex(your_sex);
	printf("��, "); print_season(your_season);
	printf("�� �¾����.\n");

	return 0;

}
