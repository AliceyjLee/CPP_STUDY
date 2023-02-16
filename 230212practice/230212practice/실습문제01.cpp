#include <iostream>

using std::string;
using std::cout;
using std::cin;
using std::endl;

// 02/12 �ǹ��̾ 
//4���� �ν��Ͻ��� ��� �־��ٸ� ���� �Լ����� �ݺ����� ���� snacknasket �ȿ� ��� �ִ� ���ĵ��� �� or ���� ��ǰ�̸��� 
//������ּ���. EX) ����� �����Դϴ�. ��Ʈ ��� ���ݸ� �Դϴ�.

class Snack {
protected:
	int price;
	string name;
	string manufacturer;
public:
	string get_name() {
		return name;
	}
	virtual void info() {

	}
};

class Candy : public Snack {
	string flavor;
public:
	Candy(string flavor, int price, string name, string manufacturer) {
		this->flavor = flavor;
		this->price = price;
		this->name = name;
		this->manufacturer;
	}
	Candy(string name) {
		this->name = name;
	}
	void info() {
		cout << name << " " << flavor << " ĵ���Դϴ�." << endl;
	}

};

class Chocolate : public Snack {
	string shape;
public:
	Chocolate(string shape, int price, string name, string manufacturer) {
		this->shape = shape;
		this->price = price;
		this->name = name;
		this->manufacturer;
	}
	Chocolate(string name) {
		this->name = name;
	}
	void info(){
		cout << name << " " << shape << " ���ݸ��Դϴ�." << endl;
	}
};

int main() {

	Snack* snack_basket[4] = { new Candy("�����",100,"���Į���","�Ե�"), new Candy("������",200,"û����","���"), new Chocolate("�����",300,"Ʈ����","������"),new Chocolate("��ƽ��",400,"�����ð�","����") };


	for (int i = 0; i < 4; i++) {
		snack_basket[i]->info();
	}
	for (int i = 0; i < 4; i++) {
		delete snack_basket[i];
	}


	return 0;
}