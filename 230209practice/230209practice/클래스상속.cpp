#include <iostream>

using std::string;
using std::cout;
using std::cin;
using std::endl;

class Person {
protected:
	string name;
	string gender;
	int age ;
public:
	Person() {
		cout << "Person ������ �����.\n";
}
	Person(string name) {
		cout << "Person ������ 2222 �����.\n";
		this->name = name;
	}
	void talk() {
		// gender = "����";    // class Person private ���������� ���� �Լ��� ��밡��
		cout << "���ϱ�\n";
	}
	void eat() {
		cout << "�Ա�\n";
	}
	void sleep() {
		cout << "���ڱ�\n";
	}
};

class Student : public Person {
	string stu_id;
public:
	Student() : Person("aaa") {
		cout << "Student ������ 2222 �����.\n";
	}
	Student(string stu_id) {
		this->stu_id = stu_id;
	}
	void study() {
		eat();
		sleep();
		talk();
		name = "�л�";         // class Person protected ����������  ��밡��
		//gender = "����";     // class Person private ���������ڿ� ���ϱ⶧���� ���Ұ���
		age = 4;               // class Person public ���������� ��밡��
		cout << "�����ϱ�\n";
	}
};

//class Mike : public Student {
//
//	void test() {
//		name;        // class Person protected ����������  ��밡�� 
//		//stu_id;      // class Student private ����������  ���Ұ���
//		//gender;      // class Person private ����������  ���Ұ���
//	}
//};

int main() {

	Student s;
	//Student s("aaa");

	//s.name = "ȫ�浿";  // protected ���������ڷ� ����, main���� ��� �Ұ��� / ��Ӱ��� �������� ���ٰ���
	//s.age = 20;

	return 0;
}