/*
* �ۼ���	: 2025.02.25
* �ۼ���	: �谭��
* ����	: �ڵ��� �帧���� - �ݺ���
* - for �ݺ���, while �ݺ���
*/

/*
* �ݺ���
* - 1+1+1+1+1 => 1X100
* 
* for, while
* 
* for(int i=0; i<10; i++)
* 
* // ���ǿ��� ��, ���� (true, false)
* // ������ ���϶��� �ݺ����� �����ϰ� ������ ���� �ݺ����� �����.
*/

#include <stdio.h>
#include <stdbool.h> // true, false ��� ���

int main()
{
	printf("�ݺ��� ����1\n");
	// A�̸��� �������� ȹ�� - ����
	int ACount = 0;
	printf("A�������� �� : %d\n", ACount);

	// �������� 1�� ȹ���ߴ�.

	for (int i = 0; i < 10; i++)
	{
		ACount = ACount + 1;
	}

	printf("A�������� �� : %d\n", ACount);

	printf("\n");
	printf("�ݺ��� ����2\n");

	int BCount = 0;
	
	for (int i = 0; i < 10; i++)
	{
		BCount = BCount + i;
	}
	printf("B�������� �� : %d\n", BCount);

	printf("\n");
	printf("for�ݺ��� ����3\n");

	for (int reverseI = 10; reverseI > 0; reverseI--)
	{
		printf("���� I�� �� : %d\n", reverseI);
	}
	printf("\n");
	printf("���� ��ȭ�ϱ�\n");

	for (;;)
	{
		// ���⸦ ��ȭ�ϴ� Step

		// 1.������ ���� ǥ�� �ܰ�
		// 
		// ������ �̸�
		printf("������ �̸� : %s\n", "�ռҵ�"); // %s, �̸��� ������ �ٲٴ� ���
		// ������ ����
		int weaponLevel = 0;
		// �⺻ ���ݷ�, ����, ����ġ
		int basePower = 10;
		int weight = 5;
		// ������ ���ݷ� = �⺻ ���ݷ� + ���� x ����ġ
		int attackPower = basePower + weaponLevel * weight;

		// 2.��ȭ�� �����ϴ� �ܰ�
		// ��ȭ�� �����Ұ��ΰ�? ��ȭ�� �׸��Ѱ��ΰ�?
		printf("��ȭ�� ���� �Ͻðڽ��ϱ�? (Y / N)\n");
		char check = ' ';
		scanf_s("%c", &check,1);
		if (check == 'Y')
		{
			printf("��ȭ�� �����մϴ�.\n");
		}
		else if (check == 'N')
		{
			printf("��ȭ�� ���½��ϴ�.\n");
			break;
		}
		else
		{
			printf("�߸��� ���� �Է��߽��ϴ�.\n");

			char another = ' ';
			scanf_s("%c", &another);
			if (check == 'Y')
			{

			}
			else if (check == 'N')
			{
				
			}
			else
			{
				printf("���α׷��� ����Ǿ����ϴ�.\n");
				break;
			}
		}

	}

	// �ݺ����� ����Ѵ�.
	// for�ݺ����� ����ؼ�
	// n�� �ݺ��ϴ� �ڵ带 ���� ǥ���ϱ� ���ؼ�
	// ��� �ݺ��ؾ����� �� �𸣰ڴ� ����
	// ����) �߸��� ���� �Է������� ��Ȯ�� ���� �䱸�ϴ� �ڵ�
	
	// while �ݺ���
	// ���� �ݺ���

	int xi = 0;
	while (xi<10)	// () ���ǽ� : ������ true�϶� {} ����, ������ false�϶� �ݺ����� �����Ѵ�.
	{
		xi++;	// while Ż���ϱ� ���� ���ǹ�
		printf("xi�� �� : %d\n", xi);
	}

	// for�ݺ����� ���°� ������ while�ݺ����� ���°� ������
	
	// �ݺ�Ƚ���� ������������ for�ݺ����� �ۼ��ϱ� �� ���ϴ�.

	// ��� �ݺ��ؾ����� �� �𸣰����� while�ݺ����� �� ���ϴ�.

	// ???�� �ݺ��� �ڵ带 �ۼ��ϰ� �ͽ��ϴ�.

	// 2��ŭ �����ϴ� ������ ���� numA�� �ֽ��ϴ�.
	// �� numA�� 10���� ũ�ų� ������ ����Ǳ⸦ ���մϴ�.
	// numA ���ڰ� 10���� Ŀ���� ���ؼ� ��� �ݺ��ߴ��� �˰�ͽ��ϴ�.
	// �ݺ��� ��� ������ countA�� ������ּ���.

	int numA = 0;
	int CountA = 0;
	printf("numA�� ���� �Է����ּ��� (��, 10���� �۾ƾ��մϴ�.)\n");
	scanf_s("%d", &numA);	// numA�� ���� ��������.

	// ǥ����
	while (true)
	{
		numA += 2;
		CountA++;
		if (numA > 10)
		{
			printf("�ݺ��� Ƚ�� : %d\n", CountA);
			printf("���� �� : %d\n", numA);
			break;
		}
	}

	//// ���� ǥ���ϴ� ���
	//while (numA<=10)
	//{
	//	numA += 2;
	//	CountA++;
	//	
	//}
	//printf("�ݺ��� Ƚ�� : %d\n", CountA);
	//printf("���� �� : %d\n", numA);


	// for�ݺ��� ǥ�� <-> while�ݺ��� ǥ���ϱ�

	// �ǽ�����
	// 1���� 10������ ���� ¦�� print ����� �غ�����.
	// for�ݺ���, while�ݺ��� Ȧ��

	// ���� �� : 2; 2 3 4...

	printf("\n");
	int number = 0;

	while (number <= 10)
	{
		printf("¦�� : %d\n", number);
		number+=2;
	}
	

}