/*
* 작성일	: 2025.02.18
* 작성자	: 김강석
* 주제	: 변수에 대하 이해
*/

/*
*	변수
*	(변수)선언
*	(데이터형) (변수의 이름); 변숭의 이름 데이터형의 성질을 갖는다.
* 
*	(변수)초기화 : 변수에 처음으로 값을 대입하는 것
* 
*	주의해야할 점
* 
*	변수를 사용하려면 선언을 해야한다.
*	선언 후 초기화를 해야한다. (에러가 발생)
*	이미 선언한 변수에 다시 선언할 수 없다.
*/

/*
*	변수의 이름 규치
*	1. 변수의 시작이름에 숫자가 들어가면 안된다.
*	2. 이름에 특수기호가 들어가면 안된다.
*	3. 언더바, 알파벳, 숫자
*	4. 이름 사이에 공백문자가 들어갈 수 없다.
*	5. 키워드는 이름으로 사용할 수 없다.
*/

/*
*	연산자
*	사칙연산 : +, -, x, /
*	나머지, 몫
*	0,1 bit 연산자
*	a > b, a < b a == b 관계연산자
*/

#include <stdio.h>

int main()
{
	int attackPower; // attackPower이름을 갖는 변수가 int의 성질을 갖는다.

	// 무기 공격력 공식 : attackPower = 기본 공격력 + 무기의 레벨 * 성장계수
	int basicPower = 10;
	int weaponLevel = 10;
	int growthPower = 3;

	attackPower = basicPower + weaponLevel * growthPower;

	// attackPower = 10;
	float _attackfloatPower; // attackPower이름을 갖는 변수가 float의 성질을 갖는다.
	_attackfloatPower = 10.5;
	
	printf("무기의 이름 : %s, 무기의 레벨 :%d, 강화 성공 확률 : %f\n", "롱소드", weaponLevel, 0.8);
	printf("강화가 성공하였습니다. 무기의 공격력이 증가했습니다.\n");
	printf("강화 후에 무기의 공격력이 %d이 되었습니다.", attackPower);

	printf("\n");
	printf("\n");

	printf("예제문제1.사각형의 넓이 구하는 내용을 콘솔창에 출력해보세요.\n");// 예제문제
	// 사각형의 넓이를 구하는 문제를 만들어 봅시다.

	// 정수형 데이터를 선언, width, length, height
	// 넓이 = 가로 x 세로

	// 사각형의 넓이를 구합니다.
	// 가로와 세로를 곱합니다.
	// 사각형의 넓이는 N입니다.
	
	int width, height, extent;

	printf("가로의 길이를 입력해주세요.\n");
	scanf_s("%d", &width);
	printf("세로의 길이를 입력해주세요.\n");
	scanf_s("%d", &height);

	extent = width * height;

	printf("사각형의 넓이는 %d입니다", extent);
}