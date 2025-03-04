#include "EnforceWeapon.h"
#pragma once

void ShowMenu()
{
	printf("1_ ��ȭ�Ѵ�.\n");
	printf("2_ ���� ���¸� Ȯ���Ѵ�. \n");

	int inputNumber = -1;
	scanf_s("%d", &inputNumber);
	while (getchar() != '\n');

	if (inputNumber == 1)
	{
		for (int i = 0;i < 30;i++)
		{
			// ���׷��̵� ����� �����Ѵ�.
			if (CanUpgrade(UpgradeCost))	// ���� ����ϴ�
			{
				if (CheckRandomFunc(90)) // 90% ����
				{
					Upgrade();
				}
				else
				{
					printf("�����߽��ϴ�.\n");
				}
			}
		}

		// ��ȭ�Ѵ�.
		//printf("��ȭ�Ѵ�.\n"); // Upgrade�Լ��� ��ü
		
	}
	else if (inputNumber == 2)
	{
		// ���¸� Ȯ���Ѵ�.
		//printf("���¸� Ȯ���Ѵ�.\n"); // ShowStatus ��ü
		ShowStatus();
	}
	else
	{
		// �߸��� ��
		printf("�ش��ϴ� �Է°��� �������� �ʽ��ϴ�.\n");
	}

	// ������ Ŭ���� ���θ� Ȯ��
	if (IsGameClear())
	{
		//printf("������ Ŭ�����߽��ϴ�.\n");
		isClear = true;
	}
	else
	{
		printf("��ǥ ������ �޼����� ���߽��ϴ�.\n");
	}

	printf("��� �����Ϸ��� �ƹ� ��ư�� �Է����ּ���.\n");
	_getch();
	system("cls");
}

void Upgrade()
{
	// CurrentLevel = CurrentLevel + 1;
	// Currenetlevel += 1;
	CurrentLevel++;

	printf("��ȭ�� �����߽��ϴ�.\n");
}

void ShowStatus()
{
	printf("���� ���� ���� : %d\n", CurrentLevel);
	// ���� ������ �ݾ�
	printf("���� ������ �ݾ� : %d\n", 10000);
}

// ���� ���� ���� == �ִ� ����
bool IsGameClear()
{
	// ���� ������
	// A ? B : C;
	// A���ǽ��� True�̸� B�� ��ȯ False�̸� C��ȯ;
	return CurrentLevel == TargetLevel ? true : false;
}