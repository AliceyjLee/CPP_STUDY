#include<iostream>
#include<cstdlib>
#include<vector>


using std::string;
using std::cout;
using std::cin;
using std::endl;

// ������ ���ڸ� �̴� �ڵ�

int main() {
	//std::srand(time(NULL));           // ���� �ð��� �ʷ� �ٲ㼭 
	//std::srand(1);                  // ���ξȿ� ���ڸ� �ٲܶ����� ���ڰ� �ٲ�

	//int num = std::rand();
	//cout << num << endl;   // 41 �̶� ���� ���� �������� ������Ʈ�� ���� ������ 41 : ó�� ���� �״��
	
	//0~25 ������ ���� ����
	//int random_num = num % 26;    // 1~25�� ���� ������ num % 25 +1
	//cout << random_num << endl;

	// �ζ� ��ȣ �̱� �ǽ�

	int lotto[6] = {};       // 6���� ���ڸ� 0���� �ʱ�ȭ - �Ϲ� �迭
	std::srand(time(NULL));  // ������ ���� ������ �ϱ�
	
	// 1��° ���
	/*
	int count = 0;
	while (count < 6) {
		bool is_dup = false;                 // ù��° �迭 ���ڴ� �ٷ� false  
		int num = std::rand() % 45 + 1;      // 1~45������ ����
		for (int i = 0; i < count; i++) {    
			if (lotto[i] == num) {
				is_dup = true;
				break;
			}
		}
		if (!is_dup) {                      // �ߺ��� �ƴ϶�� count�� ���� �ֱ�
			lotto[count] = num;							 
			count++;
		}
	}
	for (int i = 0; i < 6; i++) {
		cout << lotto[i] << " ";
	}
	*/
	
	// 2��° ��� 

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
