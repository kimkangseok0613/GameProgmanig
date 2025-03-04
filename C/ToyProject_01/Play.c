#include "Play.h"

// ��ȭ ���ӿ� �ʿ��� ���� ������
// ���� ��ǥ
int CurrentLevel = 8;
int TargetLevel = 10;
bool isClear = false;

// ���� ���� - ��ȭ
int currentMoney = 10000;
int UpgradeCost = 500;
bool isFail = false;

void ShowTitle()
{
	printf("������ �������Դϴ�...........\n");
	printf("====================================================\n");
	printf("====================================================\n");
	printf("====================================================\n");

	printf("           ���� ��ȭ�ϱ�         \n\n");
}

void ShowManual()
{
	// 1. ���� ���
	printf("���� ���\n");
	printf("Ű���� �Է� �� ����Ű�� ������ �����Ѵ�.\n");
	printf("�Է� ���� �̿��� Ű�� �Է��� �ÿ� �缱���� �ؾ��մϴ�. \n\n");
	// 2. ���� ��ǥ
	printf("���� ��ǥ\n");
	printf("���� 10�� �����\n\n");
	// 3. ���� ���
	printf("���� �÷��� ���\n");
	printf("1. ���ѵ� ���������� ��ǥ�� �޼��ؾ� �մϴ�.\n");
	printf("2. Ư�� ���ⷹ������ ��ȭ �ϰ��� �����մϴ�.\n");
	printf("3. Ư�� �������� ���Ⱑ �ı��˴ϴ�.\n\n");
}

void GameLogic()  // EnforceWeapon.h
{
	while (1)
	{
		// �޴� ���� ȭ��
		ShowMenu();

		// ������ Ŭ���� �߰ų� ���ӿ����� ���

		if (isClear || isFail)
		{
			break;
		}
	}

	if (isClear)
	{
		// ������ Ŭ�����߽��ϴ�.
		printf("Game Clear!\n");
	}

	if (isFail)
	{
		// ���ӿ����� �Ǿ����ϴ�.
		printf("Game Over!\n");
	}

}

void GameLoop()
{
	ShowTitle();
	ShowManual();
	GameLogic();
}