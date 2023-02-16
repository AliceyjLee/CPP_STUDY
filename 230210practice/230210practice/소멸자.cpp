#include <iostream>

using std::string;
using std::cout;
using std::cin;
using std::endl;

// 필드(변수), 메소드(함수), 생성자(메소드의 일종), 소멸자(메소드의 일종)

class Person {
	int age = 0;
	string name;
	int* p = new int[3];
public:
	Person() {  // 생성자
		cout << "생성자 실행" << endl;
	}   
	Person(string name) {  // 생성자
		cout << "생성자 실행 2" << endl;
	}
	void test() {   // 메소드
		cout << "test" << endl;
	}
	~Person() {    // 소멸자 
		delete[] p;
		cout << "소멸자 실행" << endl;
	}
};
int main() {

	//Person p;
	Person p("aaa");
	p.test();

	Person p2;

	return 0;
}