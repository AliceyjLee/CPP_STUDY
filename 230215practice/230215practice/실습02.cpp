#include<iostream>
#include<string>
#include<vector>
#include<ctime>


using std::string;
using std::cout;
using std::cin;
using std::endl;

// ���� �ð� 30�� ���� �÷��̾�� �����ձ� ��Ģ�� ���� �ܾ �Է�
// ���� �ð��� ����Ǹ� ������ ���� ��Ű��, �Է��� �ܾ��� ������ ���

// ���ѽð� 30�� 
// ù �ܾ��� ������ ���ĺ��� ���� �ܾ��� ù��° ���ĺ��� ��ġ ->  vector ?
// �Է��� �ܾ��� ���� -> �Լ� count

int main() {

	string word = "orange";
	string next;
	int count =0;   // word�� next �ܾ ��ƾ� �Ǵµ�??

	clock_t startTime = clock();
	clock_t endTime;
	
	while (true) {
		cout << word << endl;
		cout << "���� �ܾ �Է����ּ���.  " << endl;
		cin >> next;
		endTime = clock();
		if ((endTime - startTime) / CLOCKS_PER_SEC >= 30) { break; }
		int n = word.size();
		if (word[n-1] == next[0]) {
			count++;
			word = next;
		}
		else {
			cout << "�߸��� �Է��Դϴ�.  " << endl;
		}
	}


	cout << "-----------Time Over---------------";
	cout << "�� �Է��� �ܾ� ������ :" << count << "�� �Դϴ�.  " << endl;

	cout << "�ɸ��ð��� " << (endTime - startTime) / CLOCKS_PER_SEC << endl;
	return 0;
}