#include<iostream>
#include<vector>
#include "Snack.h"
#include "Candy.h"
#include "Chocolate.h"

using std::string;
using std::cout;
using std::cin;
using std::endl;

int main() {
	std::vector<Snack*> snack_basket;  // Snack �̶�� Ÿ������ ����Ͽ� ���ҵ��� ���� ��´�

	while (1) {
		int type;
		cout << "���ڹٱ��Ͽ� �߰��� ������ ���ÿ�. (1:����, 2:���ݸ�, 0:���� )" << endl;
		cin >> type;
		if (type == 1) {
			string taste;
			cout << "���� �Է��ϼ��� :";
			cin >> taste;
			snack_basket.push_back(new Candy(taste)); // �߰��Ǵ� ������ ��� ���̰� �Ѵ�
		}
		else if (type == 2) {
			string shape;
			cout << "����� �Է��ϼ��� : ";
			cin >> shape;
			snack_basket.push_back(new Chocolate(shape));
		}
		else if (type == 0)
			break;
		else {
			cout << "0~2 ������ ���ڸ� �Է��ϼ���." << endl;
		}
	}
	cout << "���ڹٱ��Ͽ� ��� ������ ������ " << Snack::get_count() << "�� �Դϴ�." << endl;
	cout << "���ڹٱ��Ͽ� ��� ���� Ȯ���ϱ� ! " << endl;
	
	for (Snack* snack : snack_basket) {
		snack->show_info();
	}
	for (Snack* snack : snack_basket) {
		delete snack;
	}
	snack_basket.clear();

	return 0;
}