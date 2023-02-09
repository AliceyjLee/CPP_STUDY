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
		cout << "나는 사람이야 \n";
	}
	void show(int a) {
		cout << "나는 사람이야 2 \n";
	}
};

class Student : public Person { // 기본값 private
	string stu_id;
public:
	Student() : Person() {}

	using Person::show;
	void show() {
		cout << "나는 학생이야 \n";
	}
};


int main() {
	Student s2;
	s2.show();
	s2.show(1);
	// 오류가 난다
	// 둘 중에 하나가 실행될 것 같다.

	return 0;
}