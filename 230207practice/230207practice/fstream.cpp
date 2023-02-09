#include<iostream>
#include<fstream>  // 파일을 다루기 위한 기능 제공
#include<string>   // getline을 사용하기 위해

using std::ifstream;
using std::cout;


int main() {

	ifstream file;// 불러올 파일을 담을 변수 만들기
	file.open("test.txt"); // 불러올 파일을 열기 () 가로안에 불러올 파일 이름 넣기
	//file.fail();  // 파일 여는 것에 실패하면 true, 성공하면 false
	if (file.fail()) {
		cout << "파일없음" << std::endl;
		return -1;
	}


	//std::string str, str2, line; // 불러올 파일 안의 내용을 string(문자열)로 표현하기
	//file >> str >> str2;   // 파일 안의 내용을 str, str2에 저장 // 공백(띄어쓰기, 엔터 전까지 읽어옴)

	//while (file >> str >> str2) {
	//	cout << str << " " << str2;
	//	cout << std::endl;
	//}

	//std::getline(file, line); // 불러온 파일의 내용을 한 줄씩 읽어서 line에 저장
	
	//while (std::getline(file, line)) {
	//	cout << line << std::endl;
	//}

	//cout << line;

	//cout << str << " " << str2; // 불러와 str, str2에 저장해둔 내용을 출력

	file.close(); // 불러온 파일을 닫기 open->close 


	return 0;
}