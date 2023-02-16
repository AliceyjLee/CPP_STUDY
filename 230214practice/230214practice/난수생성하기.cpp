#include<iostream>
#include<cstdlib>
#include<vector>


using std::string;
using std::cout;
using std::cin;
using std::endl;

// 랜덤한 숫자를 뽑는 코드

int main() {
	//std::srand(time(NULL));           // 현재 시간을 초로 바꿔서 
	//std::srand(1);                  // 가로안에 숫자를 바꿀때마다 숫자가 바뀜

	//int num = std::rand();
	//cout << num << endl;   // 41 이란 랜덤 숫자 생기지만 프로젝트가 끝낼 때까지 41 : 처음 숫자 그대로
	
	//0~25 사이의 숫자 생성
	//int random_num = num % 26;    // 1~25의 수를 뽑으면 num % 25 +1
	//cout << random_num << endl;

	// 로또 번호 뽑기 실습

	int lotto[6] = {};       // 6개의 숫자를 0으로 초기화 - 일반 배열
	std::srand(time(NULL));  // 랜덤한 숫자 나오게 하기
	
	// 1번째 방법
	/*
	int count = 0;
	while (count < 6) {
		bool is_dup = false;                 // 첫번째 배열 숫자는 바로 false  
		int num = std::rand() % 45 + 1;      // 1~45까지의 숫자
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
	for (int i = 0; i < 6; i++) {
		cout << lotto[i] << " ";
	}
	*/
	
	// 2번째 방법 

	int count = 0;
	for (int i = 0; i < 6; i++) {
		int num = std::rand() % 45 + 1;
		lotto[i] = num;
		for (int j = 0; j < i; j++) {
			if (lotto[j] == num) {
				i--;
			}
		}
	}
	for (int i = 0; i < 6; i++) {
		cout << lotto[i] << " ";
	}

	return 0;
}
