


#include<iostream>

using std::string;
using std::cout;
using std::cin;

class Character {
	string name;
	int level;   // 2�� ��������
	int item;
public:
	Character(string name) {
		this->name = name;
		level = 0;             /// �ʱ�ȭ
		item = 0;
	}
	void set_name(string name) {    // 40�� �ٿ��� �̸� �ٲ�
		this->name = name;
	}
	void level_up() {
		level++;
	}
	void item_up() {
		item++;
	}
	void item_down() {
		if (item <= 0) {
			cout << "�������� �����ϴ�.\n";
		}
		else 
		item--;
	}
	void print_info() {
		cout << name << " level :  " << level << " item : " << item << std::endl;
	}
 };


int main() {

	string name;
	cout << "ĳ���� �̸��� �Է��ϼ���.";
	cin >> name;               // 11�� name�� �ٲ� �� �ִ�. // 3������
	Character c(name);

	int control;
	while (1) {
		cout << "ĳ���� ���� : ";
		cin >> control;
		if (control == 0) break;
		else if (control == 1) {
			cout << "�ٲ� �̸� : ";
			cin >> name;
			c.set_name(name);
		}
		else if (control == 2) {
			c.level_up();
		}
		else if (control == 3) {
			c.item_up();
		}
		else if (control == 4) {
			c.item_down();
		}
		else if (control == 5) {
			c.print_info();
		}
		else
			cout << " 0 ~5 ������ ���� �Է��ϼ���. \n";
	}

}