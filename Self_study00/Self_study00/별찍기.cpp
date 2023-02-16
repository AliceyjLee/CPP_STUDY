#include<iostream>
#include<string>


using std::string;
using std::cout;
using std::cin;
using std::endl;


// 입력한 수만큼 별찍기

int main() {

	int input = 0;
	cout << "원하는 값(0~5)까지의 수를 입력하세요. \n";
	cin >> input;
	cout << "output :" << endl;

	for (int i = 0; i < input; i++) {
		for (int j = 0; j < i+1; j++) {
			cout << "*";
		}
		cout << endl;
	}
	
	// 입력한 수만큼 별찍기 (5개씩 5줄)




	return 0;
}
