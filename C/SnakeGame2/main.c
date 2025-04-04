#define _CRT_SECURE_NO_WARNINGS

#include "main.h"
#include "record.c"

int main()
{
    Rank ranks[MAXPLAYER];
    int order = 0;

    PlayGame();

    while (1)
    {
        printf("1_��ŷ �߰� 2_��ŷ Ȯ�� 3_���α׷� ���� 4_��ŷ ���� 5_1�� ���� ���");
        int input = 0;
        int firstRank = 0;
        scanf("%d", &input);

        switch (input)
        {
        case 1: AddRankData(ranks, &order); break;
        case 2: PrintRanking(ranks, order); break;
        case 3: FileSave(RANKFILEPATH, ranks, order); return;
        case 4: DeleteRankData(ranks, &order, 0); break;
        case 5:
            firstRank = FindMaxIndex(ranks, order);
            printf("��ŷ 1���� �̸� : %s, ���� : %d\n", ranks[firstRank].name, ranks[firstRank].length-3);


            break;
        default:
            printf("�߸��� �Է��Դϴ�. Ű�� �Է����ּ���.\n");
            _getch();
            system("cls");
            break;
        }

        FileSave(RANKFILEPATH, ranks, order);
    }
}
