/*
* �ۼ���	: 2025.02.24
* �ۼ���	: �谭��
* ����	: �ڵ��� �帧
*/

/*
* main �Լ��� ���α׷��� ������.
* ���������� ������� �ڵ尡 ����ȴ�.
* main �Լ��� ������ �߰�ȣ�� ������ ���α׷��� ����ȴ�.
*/

/*
* ����� : ���α׷��� �ߴܽ��Ѽ� �ڵ带 Ȯ���ϴ� ���
* f9 ������ �ߴ����� ���� �Ǵ� ������ �� �ִ�.
*/

/*
* ���ǹ�, �б�, branch
* 
* if ����
* if(){}	
* () : ���ǹ�
* {} : ��ü, body
* 
* ������ ��
* if();{}
* - ���ǹ� ������� �ڵ尡 ����ȴ�.
*/

/*
* if(����1)
*	¦�� : n % 2 == 0
*	Ȧ�� : n % 2 == 1
* 
* else // ������ ��� �͵�
*/

/*
* ������ �������� ���� ���� �̻��̸� "N"����� �ű�� �ý����� �����.
* ���� >= 100 : S
* ���� >= 90 : A
* ���� < 90 : F
*/

/*
* ����
* �ڵ��� �帧 ���� -> ���ǿ� ���� Ư���κи� �����ϴ� ���
* if(true) {} ���� false �������� �ʴ´�.
* 
* (false && true) (true || false)
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	printf("���ǹ� ����1\n");

	// int : ������ �����ϰ� �ʹ�. + 4����Ʈ ũ��

	int count = 15;

	// ���迬����, �񱳿�����
	// 5 10
	if (count < 10) // true, false	// if (count < 10); => if (count < 10){}
	{
		printf("count���� 10���� �۽��ϴ�.\n");
	}
	else
	{
		printf("count���� 10���� ũ�ų� �����ϴ�.\n");
	}

	// if ~ else if ~ else ��
	printf("��������1\n");

	int score = 100;

	if (score >= 100)
	{
		printf("S���, �������� : %d\n", score);
	}
	else if (score >= 90)
	{
		printf("A���, �������� : %d\n", score);
	}
	else
	{
		printf("F���, �������� : %d\n", score);
	}

	// ���� ����
	// ������ ����
	// ���� C��� �������� �������� ��� Random/
	// ���ǹ� Ȯ��.
	// ??? ���� �Է��� ���� �� ũ�� -> Ů�ϴ�.

	// ���ڰ� �ִ�.
	// ���ǹ����� ���ؼ� ���ڰ� ū�� ������ ����Ѵ�.
	printf("���� ���� ���߱� ����\n");

	srand(time(NULL));
	int randomNum= rand() % 100 + 1;
	int UserNum;
	printf("1 ~ 100 ������ ���ڸ� �Է����ּ���.\n");
	scanf_s("%d", &UserNum);
	if (UserNum > randomNum)
	{
		printf("���ڰ� Ů�ϴ�. ���ڴ� %d�Դϴ�.\n", randomNum);
	}
	else if (UserNum == randomNum)
	{
		printf("���ڰ� �����ϴ�. ���ڴ� %d�Դϴ�.\n", randomNum);
	}
	else
	{
		printf("���ڰ� �۽��ϴ�. ���ڴ� %d�Դϴ�.\n", randomNum);
	}

	printf("��������2\n");// ��������2
	// ���� ���߱� ���ӿ��� ������ ���� Ƚ���� ���� ��ŷ�� �ο��غ��� �ʹ�.

	// if ~ else if ~ else if ~ else

	int countNumber = 1; // �Է°��� ���������� 1�� �����մϴ�.
	
	if (countNumber == 1)
	{
		printf("S��ũ �Դϴ�.\n");
	}
	else if (countNumber == 2)
	{
		printf("A��ũ �Դϴ�.\n");
	}
	else if (countNumber == 3)
	{
		printf("B��ũ �Դϴ�.\n");
	}
	else if (countNumber == 4)
	{
		printf("C��ũ �Դϴ�.\n");
	}

	// switch��
	printf("\n");
	printf("switch�� ����\n");

	switch (countNumber)
	{
		case 1 : printf("S��ũ �Դϴ�.\n"); break;
		case 2 : printf("A��ũ �Դϴ�.\n"); break;
		case 3 : printf("B��ũ �Դϴ�.\n"); break;
		case 4 : printf("C��ũ �Դϴ�.\n"); break;
	}

	// ���� ��
	// ��ŷ

	
}