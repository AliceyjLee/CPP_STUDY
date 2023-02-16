#include<iostream>

using std::string;
using std::cout;
using std::cin;
using std::endl;

class Person {
protected:
	string name;
public:
	virtual ~Person() {
		cout << "사람의 소멸자입니다.\n";
	}
	virtual void info() {
		cout << "사람입니다.\n";
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
	/*   
	Person s = Student();   // student 실행하면 Person도 실행됨, 
	s.info();  // 정적 바인딩 -> 사람입니다 출력
	
	// 포인터로 객체만들면 동적 바인딩이 가능
	Person* ss = new Student();           // 객체를 포인터로 설정했을때 동적 메모리 할당
	ss->info();             // ss는 값을 가져온다 (delete 필요) -> 학생입니다 출력
	(*ss).info();           // *ss 주소에 담긴 값을 가져온다 (delete 불필요)
	// ss.test();           // Person에 없는건 오류가 난다
	delete ss;

	// 빌드 중에 할당된 메모리를 사용하므로 자동으로 delete가 됨. 사용하면 런타임 에러발생
	Student stu;
	Person* sss = &stu;              
	// delete sss; 
	*/
	//업캐스팅
	Person* per_arr[3] = { new Student(), new instructor(), new Student() };
	for (int i = 0; i < 3; i++) {
		per_arr[i]->info();
	}
	for (int i = 0; i < 3; i++) {
		delete per_arr[i];
	}
	return 0;
}