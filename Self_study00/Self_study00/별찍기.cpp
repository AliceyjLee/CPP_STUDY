#include<iostream>
#include<string>


using std::string;
using std::cout;
using std::cin;
using std::endl;


// �Է��� ����ŭ �����

int main() {

	int input = 0;
	cout << "���ϴ� ��(0~5)������ ���� �Է��ϼ���. \n";
	cin >> input;
	cout << "output :" << endl;

	for (int i = 0; i < input; i++) {
		for (int j = 0; j < i+1; j++) {
			cout << "*";
		}
		cout << endl;
	}
	
	// �Է��� ����ŭ ����� (5���� 5��)




	return 0;
}
