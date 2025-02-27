#include "Upgrade.h"

int weaponLV = 0;
int normalLv = 1;
int advancedLV = 0;

int baseAttackPower = 10;
int currentAttackPower = 0;

void ShowUpgradeMenu()
{
	printf("���� ���� ���� : %d, ���� ���� ���ݷ� : %d\n", weaponLV, currentAttackPower);
	while (true)
	{
		printf("\n");
		printf("1.��ȭ�Ѵ�.\n");
		printf("2.��� ���ü� �̿�\n");
		printf("3.����Ѵ�.\n");
		printf("\n");

		int inputNumber = 0;

		scanf_s("%d", &inputNumber);
		printf("\n");

		while (getchar() != '\n');

		if (inputNumber == 1)
		{
			WeaponUpgrade();
		}
		else if (inputNumber == 2)
		{
			AdvancedWeaponUpgrade();
		}
		else if (inputNumber == 3)
		{
			printf("��ȭ�� ����߽��ϴ�.\n");
			break;
		}
		else
		{
			printf("�߸��� ���� �Է��߽��ϴ�.\n");
		}
	}
}

void WeaponUpgrade()
{
	int weight = 5;

	weaponLV = normalLv + advancedLV + 1;
	currentAttackPower = currentAttackPower+ baseAttackPower + weaponLV * weight;

	weaponLV = normalLv + advancedLV;

	printf("���� ���� ���� : %d, ���� ���� ���ݷ� : %d\n", weaponLV, currentAttackPower);
}

void AdvancedWeaponUpgrade()
{
	int weight =20;

	weaponLV = weaponLV + advancedLV + 1;
	currentAttackPower = currentAttackPower + baseAttackPower + weaponLV * weight;

	weaponLV = normalLv + advancedLV;

	printf("���� ���� ���� : %d, ���� ���� ���ݷ� : %d\n", weaponLV, currentAttackPower);
}
