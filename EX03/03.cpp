#include <iostream>
#include <string>
using namespace std;

int main() {

	//과제2
	//(EX_03)p.353~

	//문제 1
	//사용자가 몇개의 정수를 입력할 것인지를 물은 후에 동적 배열을 
	//생성하여 사용자로부터 받은 정수를 저장하는 프로그램을 작성하라.
	//new 를 이용하여 int형의 동적 배열을 생성한다. 
	//이 동적배열에 정수를 저장하라. 

	/*

	int count;

	cout << "몇 개의 정수를 입력합니까? : ";
	cin >> count;

	int* array = new int[count];
	for (int i = 0; i < count; i++) {
		cout << "정수를 입력하시오 : ";
		std::cin >> array[i];
	}

	cout << "입력된 정수는 : ";

	for (int i = 0; i < count; i++) {
		cout << array[i] << " ";
	}

	*/

	//문제 2
	//사용자가 몇 개의 이름을 입력할 것인지를 물은 후에 동적 배열을 
	//생성하여 사용자로부터 받은 이름을 저장하는 프로그램을 작성하라.
	//new를 이용하여 string의 동적 배열을 생성하고
	//이 동적배열에 이름들을 저장한다. 

	/*

	int count;

	cout << "얼마나 많은 이름을 입력하시겠습니까? : ";
	cin >> count;

	string* array = new string[count];
	for (int i = 0; i < count; i++) {
		cout << "이름 입력 #" << i + 1<<": ";
		std::cin >> array[i];
	}

	cout << "다음은 이름 목록입니다." << endl;;

	for (int i = 0; i < count; i++) {
		cout <<"이름 #"<<i+1<<": " << array[i]<<endl;
	}

	*/
}

