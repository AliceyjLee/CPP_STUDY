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
	string pw;
	string str, str2;

	cout << "�̸��� �Է��ϼ��� : ";
	cin >> name;
	cout << "����� �Է��ϼ��� : ";
	cin >> pw; 

	std::ifstream file_r("member.txt");
	while (file_r >> str >> str2) {
		if (str == name ){
			if (str2 == pw) {
				cout << "�α��� ���� !" << endl;
				break;
			}
			else {
				cout << "�α��� ���� !" << endl;
			}
		}
	}
	return 0;
}