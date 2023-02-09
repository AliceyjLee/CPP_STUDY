#include<iostream>
#include<fstream>  
#include<string>

using std::cout;
using std::cin;
using std::endl;
using std::ifstream;

int main() {

	ifstream file;// 불러올 파일을 담을 변수 만들기
	file.open("test.txt"); // 불러올 파일을 열기 () 가로안에 불러올 파일 이름 넣기
	if (file.fail()) {
		cout << "파일없음" << std::endl;
		return -1;
	}
	std::string line;
	file >> line;
	//std::getline(file, line); // 불러온 파일의 내용을 한 줄씩 읽어서 line에 저장

	while (std::getline(file,line)) {
		cout << line << endl;
	}
	file.close();

	return 0;

}