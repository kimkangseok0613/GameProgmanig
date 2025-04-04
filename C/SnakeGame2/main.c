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
        printf("1_랭킹 추가 2_랭킹 확인 3_프로그램 종료 4_랭킹 삭제 5_1위 정보 출력");
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
            printf("랭킹 1위의 이름 : %s, 점수 : %d\n", ranks[firstRank].name, ranks[firstRank].length-3);


            break;
        default:
            printf("잘못된 입력입니다. 키를 입력해주세요.\n");
            _getch();
            system("cls");
            break;
        }

        FileSave(RANKFILEPATH, ranks, order);
    }
}
