// ��ȣ ���� ������ ����Ʈ�� ���� 2�� ���� ������ ���ϰ� ���� ���� ������ Ȯ��
#include <stdio.h>

unsigned pow2(unsigned no) {
	unsigned pw = 1;
	while (no--) {
		pw *= 2;
	}
	return pw;
}

int main(void) {
	unsigned m_pow, d_pow, l_sht, r_sht;
	unsigned x, n;

	printf("��ȣ ���� ���� x�� n��Ʈ ����Ʈ�մϴ�.\n");
	printf("x : "); scanf_s("%d", &x);
	printf("n : "); scanf_s("%d", &n);

	m_pow = x * pow2(n);
	d_pow = x / pow2(n);

	l_sht = x << n;
	r_sht = x >> n;

	printf("[a] x �� (2�� %u����) == %u\n", n, m_pow);
	printf("[b] x �� (2�� %u����) == %u\n", n, d_pow);
	printf("[c] x << %u == %u\n", n, l_sht);
	printf("[d] x >> %u == %u\n", n, r_sht);

	printf("[a]�� [c]�� ���� ��ġ%s.\n",
		(r_sht == d_pow) ? "�մϴ�." : "���� �ʽ��ϴ�.");
	printf("[b]�� [d]�� ���� ��ġ%s.\n",
		(r_sht == d_pow) ? "�մϴ�." : "���� �ʽ��ϴ�.");

	return 0;
}