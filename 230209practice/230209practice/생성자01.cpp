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
	Person(string name) {                      
		cout << "Person ������ 2222 �����.\n";
		this->name = name;                      
	}
};
class Student : public Person { // �⺻�� private
	string stu_id;
public:
	Student() : Person("aaaa") {
		cout << "Student ������ �����.\n";
	}
	Student(string name, string stu_id) : Person(name) { // 1. student �̸� �Ű������� Person���� �����;��� 13����
		this->stu_id = stu_id;
	}
};

int main() {

	Student s("ȫ�浿", "1111");

	Student s2;



	return 0;
}