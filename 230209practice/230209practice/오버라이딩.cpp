#include <iostream>

using std::string;
using std::cout;
using std::cin;
using std::endl;

// �޼ҵ� �������̵� : �Լ��� �̸��Ӿƴ϶� �Լ��� ����(Ÿ�Ա���)�� ���ƾ� �Ѵ�
// �������̵� : �Ű������� ����, Ÿ��, �Լ��� �̸� ��� ������ ���� �޼ҵ带 ����� ��.
// �����ε� : �Լ��� �̸��� ����, ������ ������ ���� ���� ��.

class Person {
protected:
	string name;
public:
	Person() {}
	string get_name() {
		return name;
	}
	void print() {
		cout << "person print 1 \n";
	}
	void print(int a) {
		cout << "person print 2 \n";
	}
};
class Student : public Person { // �⺻�� private
	string stu_id;
public:
	Student() : Person() {}
	void print() {
		cout << "student print 1 \n";
	}
	void print(int a) {
		cout << "student print 2 \n";
	}
	void print(int b, int c) {
		cout << "student print 3 \n";
	}
};

int main() {

	Student s2;
	s2.print(1,2);

	Person s;
	s.print();

	return 0;
}