#include<iostream>
#include<fstream>  
#include<string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main() {

	string name_in, pw_in, name, pw;
	cout << "이름은 입력하세요. ";
	cin >> name_in;
	cout << "비밀번호를 입력하세요. ";
	cin >> pw_in;

	std::ifstream file("member.txt");  // 파일 읽어오기
	if (file.fail());

	bool is_login = false; // 로그인 성공 여부를 저장하는 변수

	while (file >> name >> pw) {
		if (name_in == name && pw_in == pw) {
			is_login = true;
			break;
		}
	}

	file.close();

	if (is_login) {
		cout << "로그인 성공\n";
		string tel_in, tel, memeber_tel_tmp;
		cout << "전화번호를 입력해 주세요.";
		cin >> tel_in;
		std::ifstream tel_file_r("member.txt");
		if (tel_file_r.fail());

		//bool is_modify = false;
		//while (tel_file_r >> name >> tel) {
		//	if (name == name_in) {  // 이미 파일에 저장된 회원
		//		is_modify = true;
		//		memeber_tel_tmp += name + " " + tel_in + "\n";
		//	}
		//	else {
		//		memeber_tel_tmp += name + " " + tel + "\n";

		//	}
		//}

			std::ofstream tel_file("member_tel.txt", std::ios::app );
			//if (is_modify) {
			//	tel_file.open("member_tel.txt");
			//	tel_file << memeber_tel_tmp;
			//}
			//else {
			//	tel_file.open("member_tel.txt", std::ios::app);
			//	tel_file << name_in + " " + tel_in + "\n";
			//}
			if (tel_file.fail())
				tel_file << name_in + " " + tel_in + "\n";
				//tel_file << memeber_tel_tmp + "\n";
				tel_file.close();
		
	}
	else cout << "로그인 실패";

	return 0;
}