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

	// cout << "�ߺ��� ���ڰ� �ֽ��ϴ�. �ٽ� �Է����ּ���. " << endl;

	std::srand(time(NULL));
	int user[6] = {};
	int count = 0;

	cout << "�ߺ����� ���� 6���� ����(1~25)�� �Է����ּ���. " << endl;
	while (count < 6) {
		bool is_dup = false;                 // ù��° �迭 ���ڴ� �ٷ� false  
		int num;
		cin >> num;                         // 1~25������ ����
		if (num > 0 && num <= 25) {
			for (int i = 0; i < count; i++) {
				if (user[i] == num) {
					is_dup = true;
					cout << "�ߺ��� ���ڰ� �ֽ��ϴ�. �ٽ� �Է����ּ���. " << endl;
					break;
				}
			}
			if (!is_dup) {                      // �ߺ��� �ƴ϶�� count�� ���� �ֱ�
				user[count] = num;
				count++;
			}
		}
		else {
			cout << "������ �ʰ��� ���ڸ� �Է��ϼ̽��ϴ�. " << endl;
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
	for (int i = 0; i < 6; i++) {
		for (int j = 0; j < 6; j++) {
			if (user[i] == lotto[j]) {
				count++;
			}
		}
	}

	// if ������� �ʰ� count ������ ��� Ȯ�� �ϱ� 
	cout << 7 - count << "�� �Դϴ� ! �����մϴ� !." << endl;
	return 0;
}