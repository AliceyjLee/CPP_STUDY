#include<iostream>
#include<string>


using std::string;
using std::cout;
using std::cin;
using std::endl;

// �Է��� ����ŭ ����� (5���� 5��)

int main() {

	for (int i = 0; i < 5; i++) {  
		cout << "*" << endl;									// ���� ������ �þ
		for (int y = 0; y < 10; y++) {
			cout << "*" << endl;
		}
	}
	return 0;
}