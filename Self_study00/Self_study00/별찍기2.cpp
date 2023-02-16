#include<iostream>
#include<string>


using std::string;
using std::cout;
using std::cin;
using std::endl;

// 입력한 수만큼 별찍기 (5개씩 5줄)

int main() {

	for (int i = 0; i < 5; i++) {  
		cout << "*" << endl;									// 줄의 갯수가 늘어남
		for (int y = 0; y < 10; y++) {
			cout << "*" << endl;
		}
	}
	return 0;
}