// 게임의 스토리1.

// 무기를 강화하는데
// n강일 때의 무기,  n+1 무기의 정보를 화면에 출력하는 스토리를 작성해보세요.

#include <stdio.h>

int  main()
{

	int basePower = 10;
	int weaponLv = 1;
	int weight = 2;

	int attackpower = basePower + weaponLv * weight;

	printf("무기의 레벨 : %d, 무기의 공격력 : %d\n", weaponLv++, attackpower);
	attackpower = basePower + weaponLv * weight;
	printf("무기의 레벨 : %d, 무기의 공격력 : %d\n", weaponLv, attackpower);

	// 게임의 스토리2.

	// 아이템 인벤토리.  Slot. 기타 아이템 수집. Stack x 갯수.
	// Slot 최대 갯수 : 변수
	// Stack 최대 갯수 : 변수
	// A 아이템을 n개 획득, B 아이템 m개 획득
	// 현재 인벤토리의 갯수가 가득 찼는지 안찼는지 표현하는 결과를 표현해보세요.

	int maxInventorySlot = 10;
	int AStackCount = 200;
	int BStackCount = 200;
	int ADrop = 555;
	int BDrop = 7777;

	printf("1시간 동안 사냥을 해서 아이템을 획득을 했다.\n");
	printf("A아이템 : %d, B아이템 : %d 획득했다.\n", ADrop, BDrop);

	// 나머지

	int AInventoryCount = (ADrop % AStackCount) == 0 ? (ADrop / AStackCount) : (ADrop / AStackCount) + 1;
	int BInventoryCount = (BDrop % BStackCount) == 0 ? (BDrop / BStackCount) : (BDrop / BStackCount) + 1;

	printf(" A의 갯수 :%d B의 갯수 : %d\n", AInventoryCount, BInventoryCount);
	printf("결과 :  %s\n", maxInventorySlot <= (AInventoryCount + BInventoryCount) ? "가득참" : "가득안참");
}