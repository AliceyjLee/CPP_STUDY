#include<iostream>
#include<fstream>  
#include<string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

bool checkFileOpen(std::ifstream &file) {
	if (file.fail()) {
		cout << "���Ͼ���" << endl;
		return false;
	}
	else return true;
}

int main() {

	string name;
	int pw = 0;
	std::ofstream file("member.txt");
	if (file.fail()) {
		cout << "���Ͼ���" << endl;
		return -1;
	}

	cout << "3�� ȸ���� ���� �̸��� ��й�ȣ�� �Է��ϼ���." << endl;

	for (int i = 0; i < 3; i++) {
		cout << i + 1 << "��° ȸ�� : ";
		cin >> name >> pw;
		file << name << " " << pw << endl;
	}

	file.close();

	cout << "------------ ȸ�� ��� �б� -----------" << endl;

	std::ifstream file_r("member.txt");
	if (!checkFileOpen(file_r)) return -1;

	std::string line, file_content = "";
	while (std::getline(file_r, line)) {
		file_content += line + "\n";
	}

	cout << file_content;

	return 0;
}
