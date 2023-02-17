#include<iostream>
#include<string>
#include<vector>
#include<ctime>

using std::string;
using std::cout;
using std::cin;
using std::endl;

// 컴퓨터가 1~25 까지의 수 중 랜덤으로 6 개의 수 지정 (중복 x)  - rand() 당첨번호
// 사용자도 1~25 까지의 수 중 원하는 숫자 6 개 입력 (중복 x) - cin
// 두 배열을 비교해서 몇 등인지 출력하기
// 한 개도 맞추지 못하면 7 등, 1 개만 맞추면 6 등, 2 개 맞추면 5 등
//  6 개를 모두 맞추면 1 등

int main() {


	
	std::srand(time(NULL));
	int user_num[6] = {};
	int count = 0;

	cout << "중복되지 않은 6개의 숫자(1~25)를 입력해주세요. " << endl;
	while (count < 6) {
		bool is_dup = false;                 // 첫번째 배열 숫자는 바로 false  
		int num;
		cin >> num;                         // 1~25까지의 숫자
		for (int i = 0; i < count; i++) {
			if (user_num[i] == num) {
				is_dup = true;
				break;
			}
		}
		if (!is_dup) {                      // 중복이 아니라면 count에 숫자 넣기
			user_num[count] = num;
			count++;
		}
	}
	
	int lotto[6] = {};       // 6개의 숫자를 0으로 초기화 - 일반 배열
	count = 0;
	while (count < 6) {
		bool is_dup = false;                 // 첫번째 배열 숫자는 바로 false  
		int num = std::rand() % 25 + 1;      // 1~25까지의 숫자
		for (int i = 0; i < count; i++) {
			if (lotto[i] == num) {
				is_dup = true;
				break;
			}
		}
		if (!is_dup) {                      // 중복이 아니라면 count에 숫자 넣기
			lotto[count] = num;
			count++;
		}
	}
	cout << "------------ 당 첨 번 호--------------" << endl;

	for (int i = 0; i < 6; i++) {
		cout << lotto[i] << " ";
	}
	cout << endl;
	cout << "------------ 당 첨 결 과--------------" << endl;

	// 사용자 배열과 컴퓨터 배열을 비교해서 같은 값이 몇 개 인지 출력하는 변수가 필요
	// user_num;
	// lotto;
	count = 0;
	for ( int i = 0; i < user_num[i]; i++ ) {
		for (int j = 0; j < lotto[j]; j++) {
			count++;
		}
	}

	if ( count == 6) {             //  다맞으면 1등, 5개 2등, 4개 3등, 3개 4등, 2개 5등, 1개 6등, 0개 7등
		cout << "1등입니다 ! " << endl;
	}
	else if ( count == 5) {
		cout << "2등입니다 ! " << endl;
	}
	else if (count == 4) {
		cout << "3등입니다 ! " << endl;
	}
	else if (count == 3) {
		cout << "4등입니다 ! " << endl;
	}
	else if (count == 2) {
		cout << "5등입니다 ! " << endl;
	}
	else if (count == 1) {
		cout << "6등입니다 ! " << endl;
	}
	else {
		cout << "7등입니다 ! " << endl;
	}

	
		
		
		
		
		
		return 0;
}