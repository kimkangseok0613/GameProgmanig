/*
* �ۼ���	: 2025.02.17
* �ۼ���	: �谭��
* ����	: ����
*/

// 0.ȯ�漳��
#include <stdio.h>

int main()
{
	// player : �г���
	// enemy : ���� �̸�
	// player's attackpower : �÷��̾��� ���ݷ�(����)
	// enemy's attackpower : ������ ���ݷ�(����)

	// ������ �̿��ؼ� �ѹ��� player �̸��� �ٲ㺸��.
	// player's attackpower ���� 8�� ���ּ���.

	int playerAttackPower = 8;
	int enemysAttackPower = 3;

	printf("%s�� %s�� ��򰡿��� �������ϴ�.\n", "touyu", "���");
	printf("%s�� ���� %s�� �߰����� ���߽��ϴ�.\n", "���", "touyu");
	printf("%s�� %s�� �����Ͽ� %d��ŭ �������� ����ϴ�.\n", "touyu", "���", playerAttackPower);
	printf("%s�� %s�� ���� �����Ͽ� %d�� %d\n", "touyu", "���", playerAttackPower, enemysAttackPower);

	char char1 = 'a';
	int int1=10;
	float float1=0.8f;

	printf("���� ��� : %c\n", char1);
	printf("���� ��� : %d\n", int1);
	printf("�Ǽ� ��� : %f\n", float1);
	printf("���ڿ� ��� : ���\n");


	printf("������ �̸� : %s, ������ ���� :%d, ��ȭ ���� Ȯ�� : %f\n", "�ռҵ�", 18, 42.5);
}
// �ܼ�â�� "�ȳ� ����" ��½��Ѻ��ڽ��ϴ�.

// 1.����ϰ� ���� ������ �ۼ��ߴ�.
// 2.�ܾ�, ����, �Ǽ�, ���ڿ��� ����ϼ���.