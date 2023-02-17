#include<iostream>
#include<cstring>
#include<string>

using std::string;
using std::cout;
using std::cin;
using std::endl;


// 원의면적 구하기 원주율(3.14) * 반지름^2

int main() {

	//double pi = 0.00;
	//cout << "원주율을 입력해주세요." << endl;
	//cin >> pi;
	//int radius = 0;
	//cout << "반지름을 입력해주세요." << endl;
	//cin >> radius;
	//double area = pi * radius * radius;
	//cout << "원의 면적은 ? " << area << endl;

	//char name1[6] = { 'G', 'r', 'a', 'c', 'e', '\0'};
	//char name2[6] = "Grace";
	//string name3 = "Chris";
	//cout << name1 << endl;
	//cout << name2 << endl;
	//cout << name3 << endl;

	// 키보드에서 문자열 입력받고 출력

	//cout << "이름을 입력해주세요.\n";
	//char name[6] = "Alice";
	//cin >> name;
	//cout << "내 이름은 " << name << "입니다 !\n";

	// 정확한 암호를 입력받을 떄 프로그램을 종효하는 프로그램을 작성하기.

	//char password[11];
	//cout << "프로그램을 종료하려면 암호를 입력하세요.\n";
	//while (1) {
	//	cout << "암호 :\n";
	//	cin >> password;
	//	if (strcmp(password,"blue")) {
	//		cout << "프로그램을 종료합니다.\n";
	//			break;
	//	}
	//	else {
	//		cout << "암호가 틀립니다.\n";
	//	}
	//}

	//cin.getline을 이용하여 빈칸을 포함하는 문자열을 읽는 예

	//cout << "주소를 입력하세요.\n";
	//char address[100];
	//cin.getline( address, 100, '\n' );
	//cout << "주소는 " << address << " 입니다 !\n";

	// 가위 바위 보 게임
	
	cout << "가위 바위 보 게임을 합니다. 가위 바위 보 중에서 입력하세요." << endl;
	string game1, game2;
	cin >> game1;
	cout << "사또 : " << game1 << endl;
	cin >> game2;
	cout << "아랑 : " << game2 << endl;
	if (game1 == game2)  {
		cout << "비겼습니다." << endl;
	}
	else if (game1 == "가위" && game2 == "바위") {
		cout << "아랑이 이겼습니다." << endl;
	}
	else if (game1 == "가위" && game2 == "보") {
		cout << "사또이 이겼습니다." << endl;
	}
	else if (game1 == "바위" && game2 == "보") {
		cout << "아랑이 이겼습니다." << endl;
	}
	else if (game1 == "보" && game2 == "가위") {
		cout << "아랑이 이겼습니다." << endl;
	}
	return 0;
}