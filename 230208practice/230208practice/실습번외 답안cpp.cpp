


#include<iostream>

using std::string;
using std::cout;
using std::cin;

class Character {
	string name;
	int level;   // 2번 문제까지
	int item;
public:
	Character(string name) {
		this->name = name;
		level = 0;             /// 초기화
		item = 0;
	}
	void set_name(string name) {    // 40번 줄에서 이름 바꿈
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
			cout << "아이템이 없습니다.\n";
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
	cout << "캐릭터 이름을 입력하세요.";
	cin >> name;               // 11줄 name을 바꿀 수 있다. // 3번까지
	Character c(name);

	int control;
	while (1) {
		cout << "캐릭터 조작 : ";
		cin >> control;
		if (control == 0) break;
		else if (control == 1) {
			cout << "바꿀 이름 : ";
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
			cout << " 0 ~5 사이의 값을 입력하세요. \n";
	}

}