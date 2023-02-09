#include<iostream>
#include<fstream>  
#include<string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

bool checkFileOpen(std::ifstream &file) {
	if (file.fail()) {
		cout << "파일없음" << endl;
		return false;
	}
	else return true;
}

int main() {

	string name;
	int pw = 0;
	std::ofstream file("member.txt");
	if (file.fail()) {
		cout << "파일없음" << endl;
		return -1;
	}

	cout << "3명 회원에 대한 이름과 비밀번호를 입력하세요." << endl;

	for (int i = 0; i < 3; i++) {
		cout << i + 1 << "번째 회원 : ";
		cin >> name >> pw;
		file << name << " " << pw << endl;
	}

	file.close();

	cout << "------------ 회원 명부 읽기 -----------" << endl;

	std::ifstream file_r("member.txt");
	if (!checkFileOpen(file_r)) return -1;

	std::string line, file_content = "";
	while (std::getline(file_r, line)) {
		file_content += line + "\n";
	}

	cout << file_content;

	return 0;
}
