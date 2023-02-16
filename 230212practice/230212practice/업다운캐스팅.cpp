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
		this->name = "아무개";
	}
	virtual ~Person() {
		cout << "사람의 소멸자입니다.\n";
	}
	virtual void info() {
		cout << "사람입니다.\n";
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
		cout << "학생의 소멸자입니다.\n";
	}
	void info() {                               // 재정의
		cout << "학생입니다.\n";
	}
	void test() {                               // 재정의
		cout << "학생의 test 함수\n";
	}
};
class instructor : public Person {
public:
	~instructor() {
		cout << "강사의 소멸자입니다.\n";
	}
	void info() {
		cout << "강사입니다.\n";
	}
};

int main() {
	// new student에 person 함수를 변수 p에 넣어준다 -> 업캐스팅
	Person* p = new Student();
	cout << p->get_name() << endl;
	// 주소값 p에 담겨있던 student를 다시 Student s에 넣어준다 -> 다운캐스팅
	Student* s = (Student*)p;
	s->test();
	p->set_name("홍길동");
	cout << p->get_name() << " " << s->get_name() << endl;
	s->set_name("성춘향");
	cout << p->get_name() << " " << s->get_name() << endl;

	Student& s1 = *(Student*)p;
	s1.set_name("코디");
	cout << p->get_name() << " " << s1.get_name() << endl;

	Student& s2 = *(Student*)p;
	s2.set_name("코양");
	cout << p->get_name() << " " << s2.get_name() << endl;

	//int a = 1;
	//int k = 2;
	//int& b = a;  // & 참조변수 변수a에 b를 넣어준다   이것의 의미를 파악해야 한다.
	//int* c = &a;  // 주소값을 보여준다
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