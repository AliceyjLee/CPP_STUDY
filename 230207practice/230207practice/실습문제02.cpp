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
	string pw;
	string str, str2;

	cout << "이름은 입력하세요 : ";
	cin >> name;
	cout << "비번을 입력하세요 : ";
	cin >> pw; 

	std::ifstream file_r("member.txt");
	while (file_r >> str >> str2) {
		if (str == name ){
			if (str2 == pw) {
				cout << "로그인 성공 !" << endl;
				break;
			}
			else {
				cout << "로그인 실패 !" << endl;
			}
		}
	}
	return 0;
}