#include <iostream>

using std::string;
using std::cout;
using std::cin;
using std::endl;

class Snack {
protected:
	int price;
	string name;
	string manufacturer;
public:
	string get_name() {
		return name;
	}
};

class Candy : public Snack {
	string flavor;
public:
	Candy(string flavor,int price, string name, string manufacturer) {
		this->flavor = flavor;
		this->price = price;
		this->name = name;
		this->manufacturer;
	}
	Candy(string name) {
		this->name = name;
	}

};

class Chocolate : public Snack {
	string shape;
public:
	Chocolate(string shape,int price, string name, string manufacturer) {
		this->shape = shape;
		this->price = price;
		this->name = name;
		this->manufacturer;
	}
	Chocolate(string name) {
		this->name = name;
	}
};

int main() {

	Snack snack_basket[4] = {Candy("�����",100,"���Į���","�Ե�"), Candy("������",200,"û����","���"),Chocolate("�����",300,"Ʈ����","������"),Chocolate("��ƽ��",400,"�����ð�","����")};

	for (int i = 0; i < 4; i++) {
		cout << snack_basket[i].get_name() << endl;
	}


	return 0;
}