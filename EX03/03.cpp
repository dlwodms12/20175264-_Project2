#include <iostream>
#include <string>
using namespace std;

int main() {

	//����2
	//(EX_03)p.353~

	//���� 1
	//����ڰ� ��� ������ �Է��� �������� ���� �Ŀ� ���� �迭�� 
	//�����Ͽ� ����ڷκ��� ���� ������ �����ϴ� ���α׷��� �ۼ��϶�.
	//new �� �̿��Ͽ� int���� ���� �迭�� �����Ѵ�. 
	//�� �����迭�� ������ �����϶�. 

	/*

	int count;

	cout << "�� ���� ������ �Է��մϱ�? : ";
	cin >> count;

	int* array = new int[count];
	for (int i = 0; i < count; i++) {
		cout << "������ �Է��Ͻÿ� : ";
		std::cin >> array[i];
	}

	cout << "�Էµ� ������ : ";

	for (int i = 0; i < count; i++) {
		cout << array[i] << " ";
	}

	*/

	//���� 2
	//����ڰ� �� ���� �̸��� �Է��� �������� ���� �Ŀ� ���� �迭�� 
	//�����Ͽ� ����ڷκ��� ���� �̸��� �����ϴ� ���α׷��� �ۼ��϶�.
	//new�� �̿��Ͽ� string�� ���� �迭�� �����ϰ�
	//�� �����迭�� �̸����� �����Ѵ�. 

	/*

	int count;

	cout << "�󸶳� ���� �̸��� �Է��Ͻðڽ��ϱ�? : ";
	cin >> count;

	string* array = new string[count];
	for (int i = 0; i < count; i++) {
		cout << "�̸� �Է� #" << i + 1<<": ";
		std::cin >> array[i];
	}

	cout << "������ �̸� ����Դϴ�." << endl;;

	for (int i = 0; i < count; i++) {
		cout <<"�̸� #"<<i+1<<": " << array[i]<<endl;
	}

	*/
}

