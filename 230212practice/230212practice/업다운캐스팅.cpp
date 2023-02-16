#include<iostream>

using std::string;
using std::cout;
using std::cin;
using std::endl;

class Person {
protected:
	string name;
public:
	Person() {
		this->name = "�ƹ���";
	}
	virtual ~Person() {
		cout << "����� �Ҹ����Դϴ�.\n";
	}
	virtual void info() {
		cout << "����Դϴ�.\n";
	}
	void set_name(string name) {
		this->name = name;
	}
	string get_name() {
		return name;
	}
};
class Student : public Person {
public:
	~Student() {
		cout << "�л��� �Ҹ����Դϴ�.\n";
	}
	void info() {                               // ������
		cout << "�л��Դϴ�.\n";
	}
	void test() {                               // ������
		cout << "�л��� test �Լ�\n";
	}
};
class instructor : public Person {
public:
	~instructor() {
		cout << "������ �Ҹ����Դϴ�.\n";
	}
	void info() {
		cout << "�����Դϴ�.\n";
	}
};

int main() {
	// new student�� person �Լ��� ���� p�� �־��ش� -> ��ĳ����
	Person* p = new Student();
	cout << p->get_name() << endl;
	// �ּҰ� p�� ����ִ� student�� �ٽ� Student s�� �־��ش� -> �ٿ�ĳ����
	Student* s = (Student*)p;
	s->test();
	p->set_name("ȫ�浿");
	cout << p->get_name() << " " << s->get_name() << endl;
	s->set_name("������");
	cout << p->get_name() << " " << s->get_name() << endl;

	Student& s1 = *(Student*)p;
	s1.set_name("�ڵ�");
	cout << p->get_name() << " " << s1.get_name() << endl;

	Student& s2 = *(Student*)p;
	s2.set_name("�ھ�");
	cout << p->get_name() << " " << s2.get_name() << endl;

	//int a = 1;
	//int k = 2;
	//int& b = a;  // & �������� ����a�� b�� �־��ش�   �̰��� �ǹ̸� �ľ��ؾ� �Ѵ�.
	//int* c = &a;  // �ּҰ��� �����ش�
	//cout << a << " " << b << " " << *c << endl;
	//b = k;
	//cout << a << " " << b << " " << *c << endl;
	//a = 3;
	//cout << a << " " << b << " " << *c << endl;

	//c = &k;
	//k = 4;
	//cout << a << " " << b << " " << *c << endl;

	delete p;
	return 0;
}