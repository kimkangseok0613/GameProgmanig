/*
* 작성일	: 2025.02.17
* 작성자	: 김강석
* 주제	: 변수
*/

// 0.환경설정
#include <stdio.h>

int main()
{
	// player : 닉네임
	// enemy : 몬스터 이름
	// player's attackpower : 플레이어의 공격력(숫자)
	// enemy's attackpower : 몬스터의 공격력(숫자)

	// 변수를 이용해서 한번에 player 이름을 바꿔보자.
	// player's attackpower 값을 8로 해주세요.

	int playerAttackPower = 8;
	int enemysAttackPower = 3;

	printf("%s와 %s가 어딘가에서 만났습니다.\n", "touyu", "고블린");
	printf("%s는 아직 %s를 발견하지 못했습니다.\n", "고블린", "touyu");
	printf("%s가 %s를 공격하여 %d만큼 데미지를 줬습니다.\n", "touyu", "고블린", playerAttackPower);
	printf("%s와 %s가 서로 공격하여 %d와 %d\n", "touyu", "고블린", playerAttackPower, enemysAttackPower);

	char char1 = 'a';
	int int1=10;
	float float1=0.8f;

	printf("문자 출력 : %c\n", char1);
	printf("정수 출력 : %d\n", int1);
	printf("실수 출력 : %f\n", float1);
	printf("문자열 출력 : 고블린\n");


	printf("무기의 이름 : %s, 무기의 레벨 :%d, 강화 성공 확률 : %f\n", "롱소드", 18, 42.5);
}
// 콘솔창에 "안녕 변수" 출력시켜보겠습니다.

// 1.출력하고 싶은 내용을 작성했다.
// 2.단어, 정수, 실수, 문자열을 출력하세요.