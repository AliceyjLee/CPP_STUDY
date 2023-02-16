#include<iostream>
#include<cstdlib>
#include<ctime>

using std::string;
using std::cout;
using std::cin;
using std::endl;

// 배스킨라빈스 31 게임 
// 서로 최소 1개에서 최대 3개씩 연속된 숫자를 말하고 31이라는 숫자를 말하는 사람이 지는 게임 ( 정해진 반복문 for문 )
// 1) 사용자는 본인이 입력한 숫자만큼 ( 배열 ? )
// 2) 컴퓨터는 랜덤 숫자만큼 ( 배열? )
// 3) 단 사용자, 컴퓨터 모두 1~3 사이의 숫자만 가능 ( 입력은 3개의 숫자까지만 허용 )

int main() {

// 숫자는 3개까지만 입력 4개 입력시, "숫자 3개까지만" 출력	
//	cout << "사용자가 부른 숫자 ! " << endl;
//	cin >> user_num;
// 
//	
//	int com_num = std::rand() % 3 + 1;
//	cout << "컴퓨터가 부른 숫자 ! " << endl;
//	cin >> com_num;

//	cout << " 최대 3개의 숫자를 입력해주세요. ( 3개까지만 ) -> " << endl;
//	cin >> num;

	int p = 0;
	int num = 0;
	int i = 0;
	int j = 0;
	bool p_lose = true, c_lose = true;
	// int count = 0;

	std::srand(time(NULL));

	while (1) {
		//if (i == 31) {
		//	p_lose = true;
		//	exit(true);
		//	cout << "사용자가 졌습니다. " << endl;
		//}
		//else if (j == 31) {
		//	c_lose = true;
		//	exit(true);
		//	cout << "컴퓨터가 졌습니다. " << endl;
		//}
		cout << "숫자를 입력하세요, : ";
		cin >> p;
		if (p > 0 && p <= 3) {
			cout << "사용자가 부른 숫자 ! " << endl;
			for (i = num + 1; i <= p + num; i++) {
				cout << i << endl;
				if (i == 31) {
					break;
				}
			}
			num += p;
			if (i == 31) { 
				cout << "사용자가 졌습니다. " << endl;
				break; 
			}
			else {
				cout << "최대 3개의 숫자를 입력해주세요. ( 3개까지만 )" << endl;
			}
			int c = std::rand() % 3 + 1;
			cout << "컴퓨터가 부른 숫자 ! " << c << endl;
			for (j = num + 1; j <= num + c; j++) {
				cout << j << endl;
				if (j == 31) {
					break;
				}
			}
			num += c;
			if (j== 31) { 
				cout << "컴퓨터가 졌습니다. " << endl;
				break; 
			}
		}
	}
		return 0;
}