/*
* 작성일	: 2025.02.24
* 작성자	: 김강석
* 주제	: 코드의 흐름
*/

/*
* main 함수는 프로그램의 시작점.
* 위에서부터 순서대로 코드가 실행된다.
* main 함수의 마지막 중괄호를 만나면 프로그램이 종료된다.
*/

/*
* 디버깅 : 프로그램을 중단시켜서 코드를 확인하는 기능
* f9 눌러서 중단점을 생성 또는 삭제할 수 있다.
*/

/*
* 조건문, 분기, branch
* 
* if 문법
* if(){}	
* () : 조건문
* {} : 몸체, body
* 
* 주의할 점
* if();{}
* - 조건문 상관없이 코드가 실행된다.
*/

/*
* if(조건1)
*	짝수 : n % 2 == 0
*	홀수 : n % 2 == 1
* 
* else // 나머지 모든 것들
*/

/*
* 점수를 기준으로 일정 점수 이상이면 "N"등급을 매기는 시스템을 만든다.
* 점수 >= 100 : S
* 점수 >= 90 : A
* 점수 < 90 : F
*/

/*
* 정리
* 코드의 흐름 제어 -> 조건에 따라서 특정부분만 실행하는 방법
* if(true) {} 실행 false 실행하지 않는다.
* 
* (false && true) (true || false)
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	printf("조건문 예제1\n");

	// int : 정수를 저장하고 싶다. + 4바이트 크기

	int count = 15;

	// 관계연산자, 비교연사자
	// 5 10
	if (count < 10) // true, false	// if (count < 10); => if (count < 10){}
	{
		printf("count값이 10보다 작습니다.\n");
	}
	else
	{
		printf("count값이 10보다 크거나 같습니다.\n");
	}

	// if ~ else if ~ else 문
	printf("예제문제1\n");

	int score = 100;

	if (score >= 100)
	{
		printf("S등급, 현재점수 : %d\n", score);
	}
	else if (score >= 90)
	{
		printf("A등급, 현재점수 : %d\n", score);
	}
	else
	{
		printf("F등급, 현재점수 : %d\n", score);
	}

	// 숫자 게임
	// 랜덤한 숫자
	// 구글 C언어 랜덤숫자 가져오는 방법 Random/
	// 조건문 확인.
	// ??? 내가 입력한 숫자 비교 크면 -> 큽니다.

	// 숫자가 있다.
	// 조건문으로 비교해서 숫자가 큰지 작은지 출력한다.
	printf("랜덤 숫자 맞추기 게임\n");

	srand(time(NULL));
	int randomNum= rand() % 100 + 1;
	int UserNum;
	printf("1 ~ 100 사이의 숫자를 입력해주세요.\n");
	scanf_s("%d", &UserNum);
	if (UserNum > randomNum)
	{
		printf("숫자가 큽니다. 숫자는 %d입니다.\n", randomNum);
	}
	else if (UserNum == randomNum)
	{
		printf("숫자가 같습니다. 숫자는 %d입니다.\n", randomNum);
	}
	else
	{
		printf("숫자가 작습니다. 숫자는 %d입니다.\n", randomNum);
	}

	printf("예제문제2\n");// 예제문제2
	// 숫자 맞추기 게임에서 문제를 맞춘 횟수에 따라서 랭킹을 부여해보고 싶다.

	// if ~ else if ~ else if ~ else

	int countNumber = 1; // 입력값을 넣을때마다 1씩 증가합니다.
	
	if (countNumber == 1)
	{
		printf("S랭크 입니다.\n");
	}
	else if (countNumber == 2)
	{
		printf("A랭크 입니다.\n");
	}
	else if (countNumber == 3)
	{
		printf("B랭크 입니다.\n");
	}
	else if (countNumber == 4)
	{
		printf("C랭크 입니다.\n");
	}

	// switch문
	printf("\n");
	printf("switch문 예제\n");

	switch (countNumber)
	{
		case 1 : printf("S랭크 입니다.\n"); break;
		case 2 : printf("A랭크 입니다.\n"); break;
		case 3 : printf("B랭크 입니다.\n"); break;
		case 4 : printf("C랭크 입니다.\n"); break;
	}

	// 점수 비교
	// 랭킹

	
}