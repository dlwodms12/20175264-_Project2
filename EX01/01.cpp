#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {

	//과제2
	//(EX_01)p.115~
	//1번문제
	//사용자로부터 2개의 문자열을 읽어서 같은지 다른지를 화면에 출력한다. 

	/*

	string str1;
	string str2;

	cout << "첫번째 문자열 : " ;
	cin >> str1;

	cout << "두번째 문자열 : " ;
	cin >> str2;

	if (str1 == str2) {
		cout << "두 문자열은 같습니다." << endl;
	}
	else
		cout << "두 문자열은 다릅니다." << endl;

	*/

	//10번문제
	//각 변의 길이가 100보다 작은 삼각형 중에서 피타고라스의 정리가 
	//성립하는 직각 삼각형은 몇개나 있는가? 
	//3중 반복문을 이용하여 피타고라스의 정리를 만족하는 3개의 정수의
	//조합을 나열하라.

	/*

	int a, b, c; //길이의 최소는 0
	int count = 0;
	for (a = 1; a < 100; a++) {
		for (b = 1; b < 100; b++) {
			for (c = 1; c < 100; c++) {
				if (a * a + b * b == c * c) {
					cout << a << " " << b << " " << c << endl;
					count++;
				}
			}
		}
	}
	cout << "성립하는 직각 삼각형의 갯수는 " << count << "개 입니다.\n";

	*/

	//16번 문제
	//라스베가스에서 50달러를 가지고 도박을 한다. 
	//도박 한번에 1달러를 거는데, 돈을 따거나 잃을 확률은 0.5이다. 
	//도박사는 가진 돈을 다 잃거나 목표금액인 250달러에 도달하면
	//도박을 중지한다. 도박사가 목표금액에 도달할 확률은 얼마나 되는지를 
	//계산하라. 

	/*

	int money = 50; //초기에 가지고 있는 돈 50달러
	int win_count = 0; // 승리한 횟수를 체크한다.
	int bet = 0; //배팅횟수
	double avg_bet; //평균 배팅 횟수

	srand((unsigned int)time(NULL));

	while (1) {
		bet++;
		if (rand() % 2) {
			money++;
			if (bet <= 1000) //배팅 1000번 중 이긴 횟수를 구함
				win_count++;
		}
		else money--;
		if (money <= 0 || money == 250) break;
	}

	cout << "초기 금액 : $50" << endl;
	cout << "목표 금액 : $250" << endl;
	cout << "1000번 중의 " << win_count << "번 승리" << endl;
	cout << "승률 = " << (double)win_count / 10. << "%" << endl;
	cout << "평균 배팅 횟수 : " << (double)bet / 1. << endl;

	*/

}




