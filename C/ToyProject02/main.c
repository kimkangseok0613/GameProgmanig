#include "border.h"
#include <Windows.h>
#include <conio.h>
#include <stdlib.h>
#include <stdbool.h>

void setCursorPos(int x, int y)
{
	COORD pos = { x,y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

bool Gameover = false;

int main()
{
	ShowBorder();

	// �÷��̾ �����Ҷ� �����Ѵ�.
	// �÷��̾ ��輱 �ȿ� �׸��� �ʹ�.

	int playerX = 10;
	int playerY = 6;

	//SetCursorPos(playerX, playerY);
	//printf("��"); // ���� Ŀ����ġ�� ""���ڸ� ����Ѵ�.

	// ������ �ٷ� ������� �ʵ��� Loop�� �����.
	// �ݺ������� ����Ǵ� �κ�
	while (1)
	{
		if (_kbhit())
		{
			setCursorPos(playerX, playerY);
			printf("  "); // ���� ��ġ �׸��� ����� �ڵ�
			// ȭ��ǥ �Է� �ν�
			if (GetAsyncKeyState(VK_UP) & 0x8000)	// ��
			{
				playerY -= 1;
				if (playerY <= 0)
				{
					playerY = 1;
				}
			}
			if (GetAsyncKeyState(VK_DOWN) & 0x8000)	// ��
			{
				playerY += 1;
				if (playerY >= 19)
				{
					playerY = 18;
				}
			}
			if (GetAsyncKeyState(VK_LEFT) & 0x8000)	// ��
			{
				playerX -= 2;
				if (playerX <= 0)
				{
					playerX = 2;
				}
			}
			if (GetAsyncKeyState(VK_RIGHT) & 0x8000)// ��
			{
				playerX += 2;
				if (playerX >= 38)
				{
					playerX = 36;
				}
			}
			else
			{
				// x, y �� �ڸ� �״��
			}
		}

		//printf("���� ��ǥ ( %d , %d )", playerX, playerY); // �׽�Ʈ �ڵ�
		
		setCursorPos(playerX, playerY);
		printf("��");

		Sleep(50);

		// 1. wait inputkey
		// 2. playerX, playerY ���� ��ȭ��Ų��.
		// 3. �ش� ��ǥ�� Ŀ�� ��ġ�� �ٲٰ� printf
		// 4. 
		//break;

		// ĳ���Ͱ� Ư�� ��ġ�� �����ϸ� Gameover true ���ᰡ �ǵ��� ��������

		if (playerX == 34 && playerY == 18)
		{
			Gameover = true;
		}

		if (Gameover)
		{
			break;
		}

	}

}