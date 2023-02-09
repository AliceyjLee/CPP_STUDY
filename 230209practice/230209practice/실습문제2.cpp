#include <iostream>

using std::string;
using std::cout;
using std::cin;
using std::endl;

//(1)Student라는 클래스 제작
//조건1 이름,학교,나이,학번을 의미하는 변수를 가져야한다.
//조건2 모든 변수의 값은 하위클래스에서 할당된다.
//조건3 lunch라는 메소드 만들고, "점심은 학식" 출력
//(2)Student 클래스를 상속받는 kim 클래스와 baek 클래스 만들기
//(3)Kim클래스와 Baek클래스 내의 변수 값 다양하게 넣기
//(4)lunch 오버라이딩.
//-> Kim클래스에서는 "점심은 김가네 김밥" 출력
//->Baek클래스에서는 "점심은 백종원 피자" 출력


class Student {
protected:
	string name;
	string school;
	int age;
	int grade;
public:
	void lunch() {
		cout << "점심은 학식!\n";
	}
};
class Kim : public Student {
public:
	Kim() {
		this->name = "김장미";
		this->school = "한예종";
		this->age = 23;
		this->grade = 3;
	}
	void lunch() {
		cout << "Kim Class : 점심은 스타게티!\n";
	}
};
class Baek : public Student {
public:
	Baek() {
		this->name = "백장미";
		this->school = "ㅎ버드";
		this->age = 32;
		this->grade = 2;
	}
public:
	void lunch() {
		cout << "Baek Class : 점심은 부리또!\n";
	}
};
int main() {

	Student s;
	s.lunch();

	Kim k;
	k.lunch();

	Baek b;
	
	b.lunch();


	return 0;
}