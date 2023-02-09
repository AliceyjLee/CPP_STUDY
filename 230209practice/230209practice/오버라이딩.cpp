#include <iostream>

using std::string;
using std::cout;
using std::cin;
using std::endl;

// 메소드 오버라이딩 : 함수의 이름뿐아니라 함수의 원형(타입까지)도 같아야 한다
// 오버라이딩 : 매개변수의 개수, 타입, 함수의 이름 모두 완전히 같은 메소드를 덮어쓰는 것.
// 오버로딩 : 함수의 이름만 같고, 원형이 완전히 같지 않은 것.

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
class Student : public Person { // 기본값 private
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