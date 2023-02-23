#include<iostream>
#include<string>
#include<vector>


using std::string;
using std::cout;
using std::cin;
using std::endl;
using std::vector;

// 마방진 만들기 
// 사용자에게서 홀수 n 받아서 n*n 마방진 만들기 
// 1은 맨 윗줄 가운데
// 1씩 커지게 오 위 -> i--,j++
// 이미 있으면 아래로 -> i--, j는 그대로
// 2쓸때는 마지막행, 다음 열 -> i->n행 , j++ 


int main() {

	// 1을 0행 가운데 배치하기 

	int i = 0; // 행
	int j = 2; // 열
	int input = 0;  // 입력 숫자 -> 행과 열의 크키 결정
	int rest;       // 나머지

	int game[5][5] = {};

		//cout << "행과 열의 크기를 자연수로 입력해주세요. -> ";
		//cin >> input;
		for (input = 1; input >= 25; input++) {
			game[i][j] = input;
			rest = input % 5;
			if (rest == 0) {
				i++;
			}
			else {
				if (--i > 0) {
					i = 4;
				}
				if (++j == 5) {
					j = 0;
				}
			}


	}

	return 0;
}