#include<iostream>
#include<cstdlib>
#include<ctime>

using std::string;
using std::cout;
using std::cin;
using std::endl;

// �轺Ų��� 31 ���� 
// ���� �ּ� 1������ �ִ� 3���� ���ӵ� ���ڸ� ���ϰ� 31�̶�� ���ڸ� ���ϴ� ����� ���� ���� ( ������ �ݺ��� for�� )
// 1) ����ڴ� ������ �Է��� ���ڸ�ŭ ( �迭 ? )
// 2) ��ǻ�ʹ� ���� ���ڸ�ŭ ( �迭? )
// 3) �� �����, ��ǻ�� ��� 1~3 ������ ���ڸ� ���� ( �Է��� 3���� ���ڱ����� ��� )

int main() {

	int p = 0;
	int num = 0;
	int i = 0;
	int j = 0;
	bool p_lose = true, c_lose = true;

	std::srand(time(NULL));

	while (1) {
		cout << "���ڸ� �Է��ϼ���, : ";
		cin >> p;
		if (p > 0 && p <= 3) {
			cout << "����ڰ� �θ� ���� ! " << endl;
			for (i = num + 1; i <= p + num; i++) {
				cout << i << endl;
				if (i == 32) {
					break;
				}
			}
			num += p;
			if (i == 32) { 
				cout << "����ڰ� �����ϴ�. " << endl;
				break; 
			}
			else {
				cout << "�ִ� 3���� ���ڸ� �Է����ּ���. ( 3�������� )" << endl;
			}
			int c = std::rand() % 3 + 1;
			cout << "��ǻ�Ͱ� �θ� ���� ! " << c << endl;
			for (j = num + 1; j <= num + c; j++) {
				cout << j << endl;
				if (j == 32) {
					break;
				}
			}
			num += c;
			if (j== 32) { 
				cout << "��ǻ�Ͱ� �����ϴ�. " << endl;
				break; 
			}
		}
	}
		return 0;
}