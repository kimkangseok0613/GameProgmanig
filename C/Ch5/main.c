/*
* �ۼ���	: 2025.02.21
* �ۼ���	: �谭��
* ����	: ���ڸ� ǥ���ϴ� ���, �������� Ÿ�� ��ȯ
*/

/*
* ����, �Ǽ�
* ������ ǥ���ϴ� ��� - ��ȣ��Ʈ MSB - 5 - 2�� ���� - unsigned
* �Ǽ��� ǥ���ϴ� ��� - MSB/����/���� - 10 = (0.1)
*/

/*
* ���� ���������� ����ؾ� �մϴ�.
* int, char, short, long
* float, double
* 
* �� �̸� Ÿ���� ����� �������?
* - ���ϰ� ����ҷ��� �մϴ�.
* 
* int : ����(�� ���) + 4����Ʈ : ������ ��Ʈ�� 0,1�� �����ϰ� ������ ��Ʈ ��ȣ ���� ��Ʈ�� ������ 32����.
*/

/*
* ������ ������ 4����Ʈ �̸��� 'num'������ �ϼ���. ���� 10���� �ʱ�ȭ�ϼ���.
* int num;
* num = 10;
* num(int)		10 ����* 
*/

/* 
* literal ���
* ��ǻ�� ���忡�� ���� ���������� ���� ����ϴ� Ÿ�� ��ȯ
* 10 <- int��
* 11.5<- double��
* 
* ��� - 10
* int num;
* num = 40;
* num = 10;
* 10 = 30;
* 
* �ɺ��� ��� - �̸��� ������ ���� �� �ִ�.
*/

/*
* ����ȯ
* �ڵ� - ������ ��ȯ
* ���� - ����� ��ȯ
* 
* ����� ��ȯ�ϴ� ���
* float fnum10 = 0.1f;
* int tempInt = (int)fnum10
*/

#include <stdio.h>

int main()
{
	int num1 = 10;
	char num2 = 1;
	short num3 = 5;
	printf("�������� ����Ʈ ũ�� : %d ����Ʈ\n",sizeof(num1));
	printf("�������� ����Ʈ ũ�� : %d ����Ʈ\n",sizeof(num2));
	printf("�������� ����Ʈ ũ�� : %d ����Ʈ\n",sizeof(num3));

	float fnum1 = 0.1f;
	double fnum2 = 0.2;
	printf("�Ǽ� �������� ũ�� ��\n");
	printf("�������� ����Ʈ ũ�� : %d ����Ʈ\n", sizeof(fnum1));
	printf("�������� ����Ʈ ũ�� : %d ����Ʈ\n", sizeof(fnum2));

	printf("���ڸ� ����Ѵ�.\n");

	char c1 = 'a';	// c1 ���� char	// 'Z' 90
	printf("�� : %c\n", c1);			// 0000 0000
	printf("�� : %d\n", c1);

	// 128���� a~z, A~Z
	wchar_t charNum = L'��';

	printf("�����ڵ� �� : %d\n", charNum);

	printf("�ɺ��� ��� ����\n");

	const double PI = 3.14;

	printf("�� ��� : %.4lf\n", PI);;
	
	printf("���� ����\n");
	
	// ���� ���̸� ���ϴ� ����
	// ���� ���� = Pi * ������ * ������;
	// Pi�� 3.14�� ����
	// �ٸ� ����� ���� ���� Pi���� �������� ���ϰ� �ڵ带 �ۼ��غ�����.

	const double Pi = 3.14;
	double radius;
	printf("���� �������� ����\n");
	scanf_s("%lf", &radius);
	double extent = radius * radius * Pi;
	printf("���� ���� : %.2lf\n", extent);

	// �÷��̾� ���
	// ü��, ���ݷ�
	// ��� (ü�� <= 0) -> ���� ü�� ��Ȱ
	// �⺻ ü������ ��Ȱ�ߴ�.
	// hp = 5;
	const int REVIVEHP = 10;
	int currentHP = REVIVEHP;

	currentHP <= 0;
	printf("�÷��̾ ����߽��ϴ�.\n");
	printf("��Ȱ�Ͻðڽ��ϴ�? Y / N\n");
	currentHP = REVIVEHP;
	printf("�÷��̾ ��Ȱ�߽��ϴ�.\n");

	float fnum10 = 0.1f;
	int tempInt = (int)fnum10;

	printf("�� : %d\n", tempInt);
	printf("�� : %f\n", (float)tempInt);

	// ������ ��ȯ
	// case1. ���� �����ڸ� ����� �� �� ������ Ÿ���� �ٸ��� �߻�.

	float fnum11 = 0.1f;
	int tempInt2 = fnum10; // ������ ���� �� �ʱ�ȭ

	printf("�� : %d\n", tempInt2);
	printf("�� : %f\n", (float)tempInt2);

	// case2. ������ �°ݿ� ���� �ڵ� ����ȯ
	// char, short -> int��ȯ (�ڵ����� int�� ����ȯ��)
	
	short ex1 = 15;		// 15 -> int
	short ex2 = 25;		// 25 -> int
	short ex3 = ex1 + ex2;	// 15 + 25 int -> short

	// case3. �������� �ڷ� ����ġ
	// ���ݷ� = �⺻ ���ݷ� + ���� + ����ġ

	int baseAttack = 10;
	int level = 1;
	double weight = 0.5;
	int AP = baseAttack + level * weight;	// 10 +  ( 1 x 0.5 )
	// (double)1 x 0.5 - �ڷ��� ��ġ���� �ʴ´�.
	// 0.5
	// ���� * �Ǽ� - �Ǽ�
	// 10 + 0.5
	// 10.5
	// (int)AP = (int)(double)10.5;

	// case3-2. �ڷ��� ����ġ (����, �Ǽ�) (����, ����)
	int abc = 129;	// 128 = 10000000
	char ccc = abc;	// -127 
	printf("�� : %d", ccc);

	// [] x4 <- [] x1 : [] [] [] []x1
	// [] x4 -> [] x1 : [1010] [0101] [0110] // []

	// �ڷ����� ��ȯ�� �� �������� �ս��� ���� ���� �������� ��ȯ�� �ȴ�.

	// [char -> short ->] int -> long -> float -> double
	
	//���� ������ ǥ�� ���� https://wikidocs.net/165714

	return 0;
}