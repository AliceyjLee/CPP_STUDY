#include <iostream>

using std::string;
using std::cout;
using std::cin;
using std::endl;

//private > protected > public
class Person {
protected:
	string name;
public:
	Person() {}
	string get_name() {
		return name;
	}
	void show() {
		cout << "���� ����̾� \n";
	}
	void show(int a) {
		cout << "���� ����̾� 2 \n";
	}
};

class Student : public Person { // �⺻�� private
	string stu_id;
public:
	Student() : Person() {}

	using Person::show;
	void show() {
		cout << "���� �л��̾� \n";
	}
};


int main() {
	Student s2;
	s2.show();
	s2.show(1);
	// ������ ����
	// �� �߿� �ϳ��� ����� �� ����.

	return 0;
}