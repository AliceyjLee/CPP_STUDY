#include <iostream>

using std::string;
using std::cout;
using std::cin;
using std::endl;

//(1)Student��� Ŭ���� ����
//����1 �̸�,�б�,����,�й��� �ǹ��ϴ� ������ �������Ѵ�.
//����2 ��� ������ ���� ����Ŭ�������� �Ҵ�ȴ�.
//����3 lunch��� �޼ҵ� �����, "������ �н�" ���
//(2)Student Ŭ������ ��ӹ޴� kim Ŭ������ baek Ŭ���� �����
//(3)KimŬ������ BaekŬ���� ���� ���� �� �پ��ϰ� �ֱ�
//(4)lunch �������̵�.
//-> KimŬ���������� "������ �谡�� ���" ���
//->BaekŬ���������� "������ ������ ����" ���


class Student {
protected:
	string name;
	string school;
	int age;
	int grade;
public:
	void lunch() {
		cout << "������ �н�!\n";
	}
};
class Kim : public Student {
public:
	Kim() {
		this->name = "�����";
		this->school = "�ѿ���";
		this->age = 23;
		this->grade = 3;
	}
	void lunch() {
		cout << "Kim Class : ������ ��Ÿ��Ƽ!\n";
	}
};
class Baek : public Student {
public:
	Baek() {
		this->name = "�����";
		this->school = "������";
		this->age = 32;
		this->grade = 2;
	}
public:
	void lunch() {
		cout << "Baek Class : ������ �θ���!\n";
	}
};
int main() {

	Student s;
	s.lunch();

	Kim k;
	k.lunch();

	Baek b;
	
	b.lunch();


	return 0;
}