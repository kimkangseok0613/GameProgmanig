#include "Intro.h"

void IntroMenu()
{

	while (1)
	{
		// UI �ؽ�Ʈ
		printf("1_ ���ӽ��� \n");
		printf("2_ �������� \n");

		// ����
		// �Է����� �����ϴ� ��� 
		// ������ ���� ���ؼ� �����Ѵ�.
		int inputNumber = -1;		 // �Է¹��� ���� �̸�
		scanf_s("%d", &inputNumber); // �Է¹޴� �Լ� (stdio.h - �ʿ�) 
		while (getchar() != '\n');	 // �Է� ���۸� ���� ���� �ڵ�

		// �� ������ '==' - ���ǹ��� �Բ� ����Ѵ�
		if (inputNumber == 1)
		{
			// ���ӽ���
			GameLoop();
		}
		else if (inputNumber == 2)
		{
			// ��������
			break;
		}
		else
		{
			// �߸��� ���� �Է��߽��ϴ�.
		}

	}


}