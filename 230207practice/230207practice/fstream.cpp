#include<iostream>
#include<fstream>  // ������ �ٷ�� ���� ��� ����
#include<string>   // getline�� ����ϱ� ����

using std::ifstream;
using std::cout;


int main() {

	ifstream file;// �ҷ��� ������ ���� ���� �����
	file.open("test.txt"); // �ҷ��� ������ ���� () ���ξȿ� �ҷ��� ���� �̸� �ֱ�
	//file.fail();  // ���� ���� �Ϳ� �����ϸ� true, �����ϸ� false
	if (file.fail()) {
		cout << "���Ͼ���" << std::endl;
		return -1;
	}


	//std::string str, str2, line; // �ҷ��� ���� ���� ������ string(���ڿ�)�� ǥ���ϱ�
	//file >> str >> str2;   // ���� ���� ������ str, str2�� ���� // ����(����, ���� ������ �о��)

	//while (file >> str >> str2) {
	//	cout << str << " " << str2;
	//	cout << std::endl;
	//}

	//std::getline(file, line); // �ҷ��� ������ ������ �� �پ� �о line�� ����
	
	//while (std::getline(file, line)) {
	//	cout << line << std::endl;
	//}

	//cout << line;

	//cout << str << " " << str2; // �ҷ��� str, str2�� �����ص� ������ ���

	file.close(); // �ҷ��� ������ �ݱ� open->close 


	return 0;
}