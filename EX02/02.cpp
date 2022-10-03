#include <iostream>
#include <math.h>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;

double calc_volume(double x)
{
	return 4.0 / 3.0 * 3.14 * pow(x, 3);
}


int main() {

	//과제2
	//(EX_02)p.160~

	//문제 2번
	//구의 반지름을 입력받아서 구의 부피를 계산하고 출력하는 프로그램
	//인라인 함수 calc_volume()을 작성하여 호출하라.

	/*

	double r;
	cout << "반지름을 입력하시오 : ";
	cin >> r;

	cout << "구의 부피는 " << calc_volume(r);

	*/

	//문제 9번
	//주사위를 두개 굴려서 합이 7, 11이면 사용자가 이기고
	//합이 2, 3, 12이면 사용자가 패배하는 게임을 작성하라.

	/*

	srand((unsigned int)time(NULL));

	int dice1;
	int dice2;
	int sum;

	while (1) {

		dice1 = rand() % 6 + 1;
		dice2 = rand() % 6 + 1;
		sum = dice1 + dice2;
		cout << "사용자의 주사위 : " << dice1 << "+" << dice2 << " = " << sum << endl;

		if (sum == 7 || sum == 11) {
			cout << "사용자가 이겼습니다.";
			break;
		}
		else if (sum == 2 || sum == 3 || sum == 12) {
			cout << "사용자가 졌습니다.";
			break;
		}

	}

	*/

	//문제 13번
	//사용자로부터 암호를 입력받고, 대문자, 소문자, 숫자가 모두 들어있으면
	//안전한 암호라고 안내하고, 그렇지 않다면 다시 입력하도록 하는 프로그램

	/*

	string password;
	bool num = false;
	bool sl = false;
	bool cl = false;

	cout << "암호를 입력하시오 : ";
	getline(cin, password);
	//.at(n) : n번째 문자열에 접근
	for (int i = 0; i < password.length(); i++) {
		if (password.at(i) >= '0' && password.at(i) <= '9') num = true;
		if (password.at(i) >= 'a' && password.at(i) <= 'z') sl = true;
		if (password.at(i) >= 'A' && password.at(i) <= 'Z') cl = true;

		if (num && sl && cl) break;
	}

	if (num && sl && cl)
		cout << "안전합니다." << endl;
	else
		cout << "안전하지 않습니다." << endl;

	*/
}