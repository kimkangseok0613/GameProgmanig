#pragma once
#include "WeaponUpgrade.h"
#include "menu.h"

int weaponLV = 0;
int baseAttackPower = 10;
int weight = 5;
int currentAttackPower = 0;

void Upgrade()
{
	while (true)
	{
		int inputNumber = -1;
		scanf_s("%d", &inputNumber);	//'\n'
		while (getchar() != '\n');		// charactor �Է� ����

		if (inputNumber == 1)
		{
			printf("\n");
			printf("��ȭ�� �����մϴ�.\n");

			// ���� ���ݷ�
			// ������ ����
			// ������ �⺻ ���ݷ�
			// ����ġ

			// ��ȭ�� ������ �����ϴ� case

			weaponLV = weaponLV + 1;// ������ ������ 1 ��½�ŵ�ϴ�.
			currentAttackPower = baseAttackPower + weaponLV * weight;// ���� ���ݷ� = �⺻ ���ݷ� + ���� * ����ġ
			printf("���� ������ ���� ���ݷ� : %d\n���� ������ ���� ���� : %d\n", currentAttackPower, weaponLV);// printf(���� ���ݷ�, ����)
		}
		else if (inputNumber == 2)
		{
			printf("��ȭ�� ����մϴ�.\n");
		}
		else if (inputNumber == 3)
		{
			printf("���α׷��� �����մϴ�.\n");
			break;
		}
		else
		{
			printf("�߸��� ���� �Է��߽��ϴ�.\n");
		}
	}
}
