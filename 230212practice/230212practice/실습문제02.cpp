#include <iostream>
#include <vector>


using std::string;
using std::cout;
using std::cin;
using std::endl;

class Snack {
protected:
	int price = 0;
	string name;
	string manufacturer;
	static int count;
public:
	static int get_count() {
		return count;
	}
	string get_name() {
		return name;
	}
	virtual void info() {

	}
};

int Snack::count = 0;

class Candy : public Snack {
	string flavor;
public:
	Candy(string flavor, int price, string name, string manufacturer) {
		this->flavor = flavor;
		this->price = price;
		this->name = name;
		this->manufacturer;
		count++;
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
		count++;
	}
	Chocolate(string name) {
		this->name = name;
	}
	void info() {
		cout << name << " " << shape << " ���ݸ��Դϴ�." << endl;
	}
};

int main() {

	//Snack* snack_basket[4]{};
	//snack_basket[0] = new Candy("�����", 100, "���Į���", "�Ե�");
	//snack_basket[1] = new Candy("������", 200, "û����", "���");
	//snack_basket[2] = new Chocolate("�����", 300, "Ʈ����", "������");
	//snack_basket[3] = new Chocolate("��ƽ��", 400, "�����ð�", "����");

	int price;
	string name;
	string manufacturer;
	string flavor;
	string shape;

	std::vector <Snack*> snacks = {};

	int control;
	int size;
	while (true) {
		cout << "���� �ٱ��Ͽ� �߰��� ������ ���ÿ�. ( 1:ĵ��, 2:���ݸ�, 0:���� ) :" << endl;
		cin >> control;
		 if (control == 1) {
			 cout << "���� �Է��ϼ���. -> " << endl;
			 cin >> flavor;
			 cout << "������ �Է��ϼ���. -> " << endl;
			 cin >> price;
			 cout << "��ǰ�̸��� �Է��ϼ���. -> " << endl;
			 cin >> name;
			 cout << "�����縦 �Է��ϼ���. -> " << endl;
			 cin >> manufacturer;

			 snacks.push_back(new Candy(flavor, price, name, manufacturer));
			 
		}
		else if (control == 2) {
			 cout << "����� �Է��ϼ���. -> " << endl;
			 cin >> shape;
			 cout << "������ �Է��ϼ���. -> " << endl;
			 cin >> price;
			 cout << "��ǰ�̸��� �Է��ϼ���. -> " << endl;
			 cin >> name;
			 cout << "�����縦 �Է��ϼ���. -> " << endl;
			 cin >> manufacturer;

			 snacks.push_back(new Chocolate(shape, price, name, manufacturer)); 
		}
		else if (control == 0) {
			 cout << "�ٱ��Ͽ� ��� ������ ������" << " " << Snack::get_count() << "�� �Դϴ�." << endl;
			 cout << "�ٱ��Ͽ� ��� ���� Ȯ���ϱ� !" << endl;
		
				break;
			 }
		else {
			cout << "0~2 ������ ���� �Է����ּ���." << endl;
			}
	}
	size = snacks.size();
	for (int i = 0; i < size; i++)
		snacks.at(i)->info();
	
	for (int i = 0; i < size; i++) {
		delete snacks.at(i);
	}
	for (int i = 0; i < size; i++) {
		snacks.pop_back();
	}
return 0;
}