#include <stdio.h>

int main() {
	/*
		���� ������
		 �����͸� 1���� ��Ű�ų� ���� ��ų �� ���

		 ++ : 1 ����
		 -- : 1 ����

		 ���� �����ڴ� ��������� ������������ �з�

		 ++n	: 1 ���� �� �ٸ� ����
		 n++	: �ٸ� ���� �� 1 ����
		 --n	: 1 ���� �� �ٸ� ����
		 n--	: �ٸ� ���� �� 1 ����
	*/

	/*int a = 5, b = 0;
	printf("a : %d\n", a);

	b = ++a * 2;
	printf("++a * 2 >> a : %d, b : %d\n", a, b);
	b = a++ * 2;
	printf("a++ * 2 >> a : %d, b : %d\n", a, b);
	b = --a * 2;
	printf("--a * 2 >> a : %d, b : %d\n", a, b);
	b = a-- * 2;
	printf("a-- * 2 >> a : %d, b : %d\n", a, b);*/

	/*
		��Ʈ ������
		 ����Ǵ� ���ڸ� 2������ ���� -> 2������ bit(2���� 1�ڸ�)���� ����

		 |		: bit or
		 &		: bit and
		 ^		: bit xor(xor : �� ������ ������ 0, �ٸ��� 1)
		 ~		: bit not
		 <<		: bit shift(left)
		 >>		: bit shift(right)
	*/

	//int c = 12;
	//int d = 7;

	//printf("%d | %d = %d\n", c, d, c | d);
	//printf("%d & %d = %d\n", c, d, c & d);
	//printf("%d ^ %d = %d\n", c, d, c ^ d);

	//int e = 20;
	//printf("~%d = %d\n", e, ~e);
	//printf("%d << 2 = %d\n", e, e << 2);
	//printf("%d >> 2 = %d\n", e, e >> 2);

	/*
		scanf() : �Է� �Լ�
		 ���α׷��� �����ϰ� �ִ� ���߿� �����͸� �Է�
		 scanf("���Ĺ���",�����ּ�);
		 scanf_s("���Ĺ���", �����ּ�, ���ũ��);
			* ��� ũ��� ���ڿ��� �Է� ���� �� ���(byte ����)
	*/

	/* ���� �Է�*/

	//int su;

	//printf("���� �Է� : ");
	//scanf("%d", &su);	// int �� ������ 4byte �����̱� ������ ������ 4byte ���
	//printf("su : %d\n", su);

	/* �Ǽ� �Է�*/

	//float f1;		// float : 4byte �Ǽ�, 7�ڸ� ����
	//double f2;		// double : 8byte �Ǽ�, 15 ~ 16�ڸ� ����

	//printf("�Ǽ� �Է� : ");
	//scanf_s("%f", &f1);
	//printf("�Ǽ� �Է� : ");
	//scanf_s("%lf", &f2);
	//printf("f1 : %f\n", f1);
	//printf("f2 : %lf\n", f2);

	/* 1byte ���� */

	//char ch1, ch2;

	//printf("���� 2 �Է� : ");
	//ch2 = getchar();		// getchar() : ���Ϲ��� �Է� �� ���
	//printf("���� 2 : ");
	//putchar(ch2);			// putchar() : ���Ϲ��� ��� �� ���
	//puts("");				// printf("\n");
	//while (getchar() != '\n');	// \n �ƴѰ͸� �Է� >> �Է�  �� enter�� ���ش�

	//printf("\n���� 1 �Է� : ");
	//scanf_s("%c", &ch1);
	//printf("���� 1 : %c\n", ch1);	char ch1, ch2;

	//printf("���� 2 �Է� : ");
	//ch2 = getchar();		// getchar() : ���Ϲ��� �Է� �� ���
	//printf("���� 2 : ");
	//putchar(ch2);			// putchar() : ���Ϲ��� ��� �� ���
	//puts("");				// printf("\n");
	//while (getchar() != '\n');	// \n �ƴѰ͸� �Է� >> �Է�  �� enter�� ���ش�

	//printf("\n���� 1 �Է� : ");
	//scanf_s("%c", &ch1);
	//printf("���� 1 : %c\n", ch1);

	/* ���ڿ� �Է� (���ڿ� �Է¿��� & ��ȣ ��� X) */

	//char st1[10], st2[10];

	//printf("���ڿ� 1 �Է� : ");
	//gets_s(st1, sizeof(st1));		// gets_s : ���ڿ� �Է� �� ���, ������ \n �ڵ� ����

	//printf("���ڿ� 2 �Է� : ");
	//scanf_s("%s", st2, sizeof(st2));
	//
	//printf("st1 = ");
	//puts(st1);						// puts : ���ڿ� ��� �� ���, �������� \n �ڵ� ���

	//printf("st2 : %s\n", st2);

	/* ���� �Է� */

	//char sp[10];
	//printf("���鹮�� �Է�\n");
	//printf("�����̽��� -> ���� : ");
	//scanf_s("%[^\n]",sp,sizeof(sp));
	//printf("sp : test%sword\n", sp);
	
	/*
		�ǽ� 1
		�̸�, ����, �ּ�, ����, Ű�� �Է� �޾Ƽ� ���� ������ ����ϴ� �ڵ� �ۼ�
		1) �ּҿ��� ���Ⱑ ���Եǵ��� �Է�
		2) ������ m/f �� �ϳ� �Է�
		3) Ű�� �Ҽ������� �Է� �����ϵ��� �ڵ� �ۼ�
		4) ��� ������ �� �Է¹ް� �ѹ��� ���
	*/

	//char name[10], addr[10], gd;
	//int age;
	//double hei;
	//printf("�̸� �Է� : ");
	//gets_s(name, sizeof(name));

	//printf("���� �Է� : ");
	//scanf("%d", &age);

	//printf("�ּ� �Է� : ");
	//gets_s(addr, sizeof(addr));
	//while (getchar() != '\n');
	//printf("���� �Է� : ");
	//gd = getchar();

	//printf("Ű �Է� : ");
	//scanf_s("%lf", &hei);

	//printf("�̸�\t : %s\n����\t : %d ��\n�ּ�\t : %s\n����\t : %c\nŰ\t : %lf", name, age, addr, gd, hei);

	char a, b, c;
	printf("�̴ϼ� �Է�a : ");
	a = getchar();
	while (getchar() != '\n');
	printf("�̴ϼ� �Է�b : ");
	b = getchar();
	while (getchar() != '\n');
	printf("�̴ϼ� �Է�c : ");
	c = getchar();

	printf("�� �̴ϼ��� %c%c%c �Դϴ�", a, b, c);

}
