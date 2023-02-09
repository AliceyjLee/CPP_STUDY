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
		cout << "Person 생성자 2222 실행됨.\n";
		this->name = name;                      
	}
};
class Student : public Person { // 기본값 private
	string stu_id;
public:
	Student() : Person("aaaa") {
		cout << "Student 생성자 실행됨.\n";
	}
	Student(string name, string stu_id) : Person(name) { // 1. student 이름 매개변수를 Person에서 가져와야함 13번줄
		this->stu_id = stu_id;
	}
};

int main() {

	Student s("홍길동", "1111");

	Student s2;



	return 0;
}