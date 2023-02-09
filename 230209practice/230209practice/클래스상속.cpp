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
		cout << "Person 생성자 실행됨.\n";
}
	Person(string name) {
		cout << "Person 생성자 2222 실행됨.\n";
		this->name = name;
	}
	void talk() {
		// gender = "여자";    // class Person private 접근제어자 같은 함수내 사용가능
		cout << "말하기\n";
	}
	void eat() {
		cout << "먹기\n";
	}
	void sleep() {
		cout << "잠자기\n";
	}
};

class Student : public Person {
	string stu_id;
public:
	Student() : Person("aaa") {
		cout << "Student 생성자 2222 실행됨.\n";
	}
	Student(string stu_id) {
		this->stu_id = stu_id;
	}
	void study() {
		eat();
		sleep();
		talk();
		name = "학생";         // class Person protected 접근제어자  사용가능
		//gender = "남자";     // class Person private 접근제어자에 속하기때문에 사용불가능
		age = 4;               // class Person public 접근제어자 사용가능
		cout << "공부하기\n";
	}
};

//class Mike : public Student {
//
//	void test() {
//		name;        // class Person protected 접근제어자  사용가능 
//		//stu_id;      // class Student private 접근제어자  사용불가능
//		//gender;      // class Person private 접근제어자  사용불가능
//	}
//};

int main() {

	Student s;
	//Student s("aaa");

	//s.name = "홍길동";  // protected 접근제어자로 지정, main에서 사용 불가능 / 상속관계 내에서만 접근가능
	//s.age = 20;

	return 0;
}