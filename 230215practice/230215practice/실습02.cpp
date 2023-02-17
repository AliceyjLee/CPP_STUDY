#include<iostream>
#include<string>
#include<vector>
#include<ctime>


using std::string;
using std::cout;
using std::cin;
using std::endl;

// 제한 시간 30초 동안 플레이어는 끝말잇기 규칙에 따라 단어를 입력
// 제한 시간이 종료되면 게임을 종료 시키고, 입력한 단어의 갯수를 출력

// 제한시간 30초 
// 첫 단어의 마지막 알파벳과 다음 단어의 첫번째 알파벳이 일치 ->  vector ?
// 입력한 단어의 갯수 -> 함수 count

int main() {

	string word = "orange";
	string next;
	int count =0;   // word랑 next 단어를 담아야 되는데??

	clock_t startTime = clock();
	clock_t endTime;
	
	while (true) {
		cout << word << endl;
		cout << "다음 단어를 입력해주세요.  " << endl;
		cin >> next;
		endTime = clock();
		if ((endTime - startTime) / CLOCKS_PER_SEC >= 30) { break; }
		int n = word.size();
		if (word[n-1] == next[0]) {
			count++;
			word = next;
		}
		else {
			cout << "잘못된 입력입니다.  " << endl;
		}
	}


	cout << "-----------Time Over---------------";
	cout << "총 입력한 단어 개수는 :" << count << "개 입니다.  " << endl;

	cout << "걸린시간은 " << (endTime - startTime) / CLOCKS_PER_SEC << endl;
	return 0;
}