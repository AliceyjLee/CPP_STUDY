#include<iostream>
#include<fstream>  
#include<string>   

using std::cout;
using std::cin;
using std::endl;
// input file stream -> ifstream ���� -> ���α׷�
// output file strea -> ofstream ���α׷� -> ����


bool checkFileOpen(std::ifstream &file) { // ����Ÿ���� �Ű������� ���� �� &������ �ʿ���
	if (file.fail()) {
		cout << "���Ͼ���" << endl;
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

	
	std::ofstream file("test1.txt");  // ���Ͽ� �ʿ��� ������ �ۼ��Ͽ� ������ ���� ����  
	// file.open("test1.txt");
	                         // ("test1.txt", std::ios::out | std::ios::app) -> �Է� ���� �߰�
	                         // ("test1.txt", std::ios::out | std::ios::trunc) -> �Է� ���� �����
	if (file.fail()) {
		cout << "���Ͼ���" << endl;
		return -1;
	}

	//file << "Hello World! \nHi there ! \nGoodbye~"; // ������ ������ ������ �ۼ�

	file << file_content;
	file.close();

	return 0;
}