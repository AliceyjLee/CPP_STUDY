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

// ���ڴ� 3�������� �Է� 4�� �Է½�, "���� 3��������" ���	
//	cout << "����ڰ� �θ� ���� ! " << endl;
//	cin >> user_num;
// 
//	
//	int com_num = std::rand() % 3 + 1;
//	cout << "��ǻ�Ͱ� �θ� ���� ! " << endl;
//	cin >> com_num;

//	cout << " �ִ� 3���� ���ڸ� �Է����ּ���. ( 3�������� ) -> " << endl;
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
		//	cout << "����ڰ� �����ϴ�. " << endl;
		//}
		//else if (j == 31) {
		//	c_lose = true;
		//	exit(true);
		//	cout << "��ǻ�Ͱ� �����ϴ�. " << endl;
		//}
		cout << "���ڸ� �Է��ϼ���, : ";
		cin >> p;
		if (p > 0 && p <= 3) {
			cout << "����ڰ� �θ� ���� ! " << endl;
			for (i = num + 1; i <= p + num; i++) {
				cout << i << endl;
				if (i == 31) {
					break;
				}
			}
			num += p;
			if (i == 31) { 
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
				if (j == 31) {
					break;
				}
			}
			num += c;
			if (j== 31) { 
				cout << "��ǻ�Ͱ� �����ϴ�. " << endl;
				break; 
			}
		}
	}
		return 0;
}