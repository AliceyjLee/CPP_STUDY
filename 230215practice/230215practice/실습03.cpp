#include<iostream>
#include<string>
#include<vector>
#include<ctime>

using std::string;
using std::cout;
using std::cin;
using std::endl;

// ��ǻ�Ͱ� 1~25 ������ �� �� �������� 6 ���� �� ���� (�ߺ� x)  - rand() ��÷��ȣ
// ����ڵ� 1~25 ������ �� �� ���ϴ� ���� 6 �� �Է� (�ߺ� x) - cin
// �� �迭�� ���ؼ� �� ������ ����ϱ�
// �� ���� ������ ���ϸ� 7 ��, 1 ���� ���߸� 6 ��, 2 �� ���߸� 5 ��
//  6 ���� ��� ���߸� 1 ��

int main() {


	
	std::srand(time(NULL));
	int user_num[6] = {};
	int count = 0;

	cout << "�ߺ����� ���� 6���� ����(1~25)�� �Է����ּ���. " << endl;
	while (count < 6) {
		bool is_dup = false;                 // ù��° �迭 ���ڴ� �ٷ� false  
		int num;
		cin >> num;                         // 1~25������ ����
		for (int i = 0; i < count; i++) {
			if (user_num[i] == num) {
				is_dup = true;
				break;
			}
		}
		if (!is_dup) {                      // �ߺ��� �ƴ϶�� count�� ���� �ֱ�
			user_num[count] = num;
			count++;
		}
	}
	
	int lotto[6] = {};       // 6���� ���ڸ� 0���� �ʱ�ȭ - �Ϲ� �迭
	count = 0;
	while (count < 6) {
		bool is_dup = false;                 // ù��° �迭 ���ڴ� �ٷ� false  
		int num = std::rand() % 25 + 1;      // 1~25������ ����
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
	cout << "------------ �� ÷ �� ȣ--------------" << endl;

	for (int i = 0; i < 6; i++) {
		cout << lotto[i] << " ";
	}
	cout << endl;
	cout << "------------ �� ÷ �� ��--------------" << endl;

	// ����� �迭�� ��ǻ�� �迭�� ���ؼ� ���� ���� �� �� ���� ����ϴ� ������ �ʿ�
	// user_num;
	// lotto;
	count = 0;
	for ( int i = 0; i < user_num[i]; i++ ) {
		for (int j = 0; j < lotto[j]; j++) {
			count++;
		}
	}

	if ( count == 6) {             //  �ٸ����� 1��, 5�� 2��, 4�� 3��, 3�� 4��, 2�� 5��, 1�� 6��, 0�� 7��
		cout << "1���Դϴ� ! " << endl;
	}
	else if ( count == 5) {
		cout << "2���Դϴ� ! " << endl;
	}
	else if (count == 4) {
		cout << "3���Դϴ� ! " << endl;
	}
	else if (count == 3) {
		cout << "4���Դϴ� ! " << endl;
	}
	else if (count == 2) {
		cout << "5���Դϴ� ! " << endl;
	}
	else if (count == 1) {
		cout << "6���Դϴ� ! " << endl;
	}
	else {
		cout << "7���Դϴ� ! " << endl;
	}

	
		
		
		
		
		
		return 0;
}