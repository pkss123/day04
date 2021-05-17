#include <stdio.h>

int main() {
	/*
		증감 연산자
		 데이터를 1증가 시키거나 감소 시킬 때 사용

		 ++ : 1 증가
		 -- : 1 감소

		 증감 연산자는 전위연산과 후위연산으로 분류

		 ++n	: 1 증가 후 다른 연산
		 n++	: 다른 연산 후 1 증가
		 --n	: 1 감소 후 다른 연산
		 n--	: 다른 연산 후 1 감소
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
		비트 연산자
		 연산되는 숫자를 2진수로 변경 -> 2진수를 bit(2진수 1자리)끼리 연산

		 |		: bit or
		 &		: bit and
		 ^		: bit xor(xor : 두 논리값이 같으면 0, 다르면 1)
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
		scanf() : 입력 함수
		 프로그램이 동작하고 있는 도중에 데이터를 입력
		 scanf("서식문자",변수주소);
		 scanf_s("서식문자", 변수주소, 허용크기);
			* 허용 크기는 문자열을 입력 받을 때 사용(byte 단위)
	*/

	/* 정수 입력*/

	//int su;

	//printf("숫자 입력 : ");
	//scanf("%d", &su);	// int 형 변수는 4byte 고정이기 때문에 무조건 4byte 허용
	//printf("su : %d\n", su);

	/* 실수 입력*/

	//float f1;		// float : 4byte 실수, 7자리 까지
	//double f2;		// double : 8byte 실수, 15 ~ 16자리 까지

	//printf("실수 입력 : ");
	//scanf_s("%f", &f1);
	//printf("실수 입력 : ");
	//scanf_s("%lf", &f2);
	//printf("f1 : %f\n", f1);
	//printf("f2 : %lf\n", f2);

	/* 1byte 문자 */

	//char ch1, ch2;

	//printf("문자 2 입력 : ");
	//ch2 = getchar();		// getchar() : 단일문자 입력 시 사용
	//printf("문자 2 : ");
	//putchar(ch2);			// putchar() : 단일문자 출력 시 사용
	//puts("");				// printf("\n");
	//while (getchar() != '\n');	// \n 아닌것만 입력 >> 입력  후 enter를 없앤다

	//printf("\n문자 1 입력 : ");
	//scanf_s("%c", &ch1);
	//printf("문자 1 : %c\n", ch1);	char ch1, ch2;

	//printf("문자 2 입력 : ");
	//ch2 = getchar();		// getchar() : 단일문자 입력 시 사용
	//printf("문자 2 : ");
	//putchar(ch2);			// putchar() : 단일문자 출력 시 사용
	//puts("");				// printf("\n");
	//while (getchar() != '\n');	// \n 아닌것만 입력 >> 입력  후 enter를 없앤다

	//printf("\n문자 1 입력 : ");
	//scanf_s("%c", &ch1);
	//printf("문자 1 : %c\n", ch1);

	/* 문자열 입력 (문자열 입력에는 & 기호 사용 X) */

	//char st1[10], st2[10];

	//printf("문자열 1 입력 : ");
	//gets_s(st1, sizeof(st1));		// gets_s : 문자열 입력 시 사용, 마지막 \n 자동 제거

	//printf("문자열 2 입력 : ");
	//scanf_s("%s", st2, sizeof(st2));
	//
	//printf("st1 = ");
	//puts(st1);						// puts : 문자열 출력 시 사용, 마지막에 \n 자동 사용

	//printf("st2 : %s\n", st2);

	/* 공백 입력 */

	//char sp[10];
	//printf("공백문자 입력\n");
	//printf("스페이스바 -> 엔터 : ");
	//scanf_s("%[^\n]",sp,sizeof(sp));
	//printf("sp : test%sword\n", sp);
	
	/*
		실습 1
		이름, 나이, 주소, 성별, 키를 입력 받아서 개인 정보를 출력하는 코드 작성
		1) 주소에는 띄어쓰기가 포함되도록 입력
		2) 성별은 m/f 중 하나 입력
		3) 키는 소수점까지 입력 가능하도록 코드 작성
		4) 모든 정보를 다 입력받고 한번에 출력
	*/

	//char name[10], addr[10], gd;
	//int age;
	//double hei;
	//printf("이름 입력 : ");
	//gets_s(name, sizeof(name));

	//printf("나이 입력 : ");
	//scanf("%d", &age);

	//printf("주소 입력 : ");
	//gets_s(addr, sizeof(addr));
	//while (getchar() != '\n');
	//printf("성별 입력 : ");
	//gd = getchar();

	//printf("키 입력 : ");
	//scanf_s("%lf", &hei);

	//printf("이름\t : %s\n나이\t : %d 세\n주소\t : %s\n성별\t : %c\n키\t : %lf", name, age, addr, gd, hei);

	char a, b, c;
	printf("이니셜 입력a : ");
	a = getchar();
	while (getchar() != '\n');
	printf("이니셜 입력b : ");
	b = getchar();
	while (getchar() != '\n');
	printf("이니셜 입력c : ");
	c = getchar();

	printf("내 이니셜은 %c%c%c 입니다", a, b, c);

}
