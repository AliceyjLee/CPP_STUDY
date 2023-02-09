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
				cout << "이름변경!: \n";
				cin >> name;
			}
			void level_up(); {
				level += 1;
				cout << "level up!: " << level << endl;
				return;

			void pick_item(); {
				item_num += 1;
				cout << "item 줍줍!: " << item_num << endl;
				return;
			}
			void use_item(); {
				item_num -= 1;
				cout << "item 사용!: " << item_num << endl;
				return;
			}
		}
};
int main() {

	string cha_name;
	cout << "캐릭터 이름은 작성해주세요. ";
	cin >> cha_name;
	
	int num = 0;
	cout << "조작 입력 버튼을 눌러주세요. " << endl;
	cin >> num;

	character game(name);

	if ( num == 1) {


	



	return 0;
}