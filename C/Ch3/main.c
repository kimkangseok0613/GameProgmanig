// ������ ���丮1.

// ���⸦ ��ȭ�ϴµ�
// n���� ���� ����,  n+1 ������ ������ ȭ�鿡 ����ϴ� ���丮�� �ۼ��غ�����.

#include <stdio.h>

int  main()
{

	int basePower = 10;
	int weaponLv = 1;
	int weight = 2;

	int attackpower = basePower + weaponLv * weight;

	printf("������ ���� : %d, ������ ���ݷ� : %d\n", weaponLv++, attackpower);
	attackpower = basePower + weaponLv * weight;
	printf("������ ���� : %d, ������ ���ݷ� : %d\n", weaponLv, attackpower);

	// ������ ���丮2.

	// ������ �κ��丮.  Slot. ��Ÿ ������ ����. Stack x ����.
	// Slot �ִ� ���� : ����
	// Stack �ִ� ���� : ����
	// A �������� n�� ȹ��, B ������ m�� ȹ��
	// ���� �κ��丮�� ������ ���� á���� ��á���� ǥ���ϴ� ����� ǥ���غ�����.

	int maxInventorySlot = 10;
	int AStackCount = 200;
	int BStackCount = 200;
	int ADrop = 555;
	int BDrop = 7777;

	printf("1�ð� ���� ����� �ؼ� �������� ȹ���� �ߴ�.\n");
	printf("A������ : %d, B������ : %d ȹ���ߴ�.\n", ADrop, BDrop);

	// ������

	int AInventoryCount = (ADrop % AStackCount) == 0 ? (ADrop / AStackCount) : (ADrop / AStackCount) + 1;
	int BInventoryCount = (BDrop % BStackCount) == 0 ? (BDrop / BStackCount) : (BDrop / BStackCount) + 1;

	printf(" A�� ���� :%d B�� ���� : %d\n", AInventoryCount, BInventoryCount);
	printf("��� :  %s\n", maxInventorySlot <= (AInventoryCount + BInventoryCount) ? "������" : "�������");
}