#include<iostream>

using namespace std;
class character {
	private:
		string name;
		int level;
		int item_num;
	public:
		character(string name) {
			this->name = name;
			int level = 0;
			int item_num = 0;

			void change_name(string name); {
				cout << "�̸�����!: \n";
				cin >> name;
			}
			void level_up(); {
				level += 1;
				cout << "level up!: " << level << endl;
				return;

			void pick_item(); {
				item_num += 1;
				cout << "item ����!: " << item_num << endl;
				return;
			}
			void use_item(); {
				item_num -= 1;
				cout << "item ���!: " << item_num << endl;
				return;
			}
		}
};
int main() {

	string cha_name;
	cout << "ĳ���� �̸��� �ۼ����ּ���. ";
	cin >> cha_name;
	
	int num = 0;
	cout << "���� �Է� ��ư�� �����ּ���. " << endl;
	cin >> num;

	character game(name);

	if ( num == 1) {


	



	return 0;
}