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

	//����2
	//(EX_02)p.160~

	//���� 2��
	//���� �������� �Է¹޾Ƽ� ���� ���Ǹ� ����ϰ� ����ϴ� ���α׷�
	//�ζ��� �Լ� calc_volume()�� �ۼ��Ͽ� ȣ���϶�.

	/*

	double r;
	cout << "�������� �Է��Ͻÿ� : ";
	cin >> r;

	cout << "���� ���Ǵ� " << calc_volume(r);

	*/

	//���� 9��
	//�ֻ����� �ΰ� ������ ���� 7, 11�̸� ����ڰ� �̱��
	//���� 2, 3, 12�̸� ����ڰ� �й��ϴ� ������ �ۼ��϶�.

	/*

	srand((unsigned int)time(NULL));

	int dice1;
	int dice2;
	int sum;

	while (1) {

		dice1 = rand() % 6 + 1;
		dice2 = rand() % 6 + 1;
		sum = dice1 + dice2;
		cout << "������� �ֻ��� : " << dice1 << "+" << dice2 << " = " << sum << endl;

		if (sum == 7 || sum == 11) {
			cout << "����ڰ� �̰���ϴ�.";
			break;
		}
		else if (sum == 2 || sum == 3 || sum == 12) {
			cout << "����ڰ� �����ϴ�.";
			break;
		}

	}

	*/

	//���� 13��
	//����ڷκ��� ��ȣ�� �Է¹ް�, �빮��, �ҹ���, ���ڰ� ��� ���������
	//������ ��ȣ��� �ȳ��ϰ�, �׷��� �ʴٸ� �ٽ� �Է��ϵ��� �ϴ� ���α׷�

	/*

	string password;
	bool num = false;
	bool sl = false;
	bool cl = false;

	cout << "��ȣ�� �Է��Ͻÿ� : ";
	getline(cin, password);
	//.at(n) : n��° ���ڿ��� ����
	for (int i = 0; i < password.length(); i++) {
		if (password.at(i) >= '0' && password.at(i) <= '9') num = true;
		if (password.at(i) >= 'a' && password.at(i) <= 'z') sl = true;
		if (password.at(i) >= 'A' && password.at(i) <= 'Z') cl = true;

		if (num && sl && cl) break;
	}

	if (num && sl && cl)
		cout << "�����մϴ�." << endl;
	else
		cout << "�������� �ʽ��ϴ�." << endl;

	*/
}