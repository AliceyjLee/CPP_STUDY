#include<iostream>
#include<fstream>  
#include<string>   

using std::cout;
using std::cin;
using std::endl;
// input file stream -> ifstream 파일 -> 프로그램
// output file strea -> ofstream 프로그램 -> 파일


bool checkFileOpen(std::ifstream &file) { // 참조타입을 매개변수로 받을 때 &연산자 필요함
	if (file.fail()) {
		cout << "파일없음" << endl;
		return false;
	}
	else return true;
}

int main() {

	std::ifstream file_r("test11.txt");
	if (!checkFileOpen(file_r)) return -1;
	
	std::string line, file_content = "";
	while (std::getline(file_r, line)) {
		file_content += line + "\n";
	}

	cout << file_content;

	
	std::ofstream file("test1.txt");  // 파일에 필요한 내용을 작성하여 파일을 만들어서 생성  
	// file.open("test1.txt");
	                         // ("test1.txt", std::ios::out | std::ios::app) -> 입력 내용 추가
	                         // ("test1.txt", std::ios::out | std::ios::trunc) -> 입력 내용 덮어쓰기
	if (file.fail()) {
		cout << "파일없음" << endl;
		return -1;
	}

	//file << "Hello World! \nHi there ! \nGoodbye~"; // 생성할 파일의 내용을 작성

	file << file_content;
	file.close();

	return 0;
}