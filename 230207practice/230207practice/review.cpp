#include<iostream>
#include<fstream>  
#include<string>

using std::cout;
using std::cin;
using std::endl;
using std::ifstream;

int main() {

	ifstream file;// �ҷ��� ������ ���� ���� �����
	file.open("test.txt"); // �ҷ��� ������ ���� () ���ξȿ� �ҷ��� ���� �̸� �ֱ�
	if (file.fail()) {
		cout << "���Ͼ���" << std::endl;
		return -1;
	}
	std::string line;
	file >> line;
	//std::getline(file, line); // �ҷ��� ������ ������ �� �پ� �о line�� ����

	while (std::getline(file,line)) {
		cout << line << endl;
	}
	file.close();

	return 0;

}