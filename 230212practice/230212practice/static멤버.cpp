//#include<iostream>
//#include<vector>
//
//using std::string;
//using std::cout;
//using std::cin;
//using std::endl;
//
//// 멤버 -> 필드, 메소드 를 모여 합한 것
//
//class Person {
//protected:
//	string name;
//	static int count;
//public:
//	static void static_method() {
//		// name = "홍길동"; 
//		// set_name("아무개");  // static 메소드 안에서는 일반 멤버에 접근 할 수 없음.
//		cout << "스태틱 메소드 테스트" << endl;
//	}
//	static int get_count() {
//		return count;
//	}
//	Person() {
//		this->name = "아무개";
//		count++;
//	}
//	virtual ~Person() {
//		cout << "사람의 소멸자입니다.\n";
//		count--;
//	}
//	virtual void info() {
//		cout << "사람입니다.\n";
//	}
//	void set_name(string name) {
//		this->name = name;
//	}
//	string get_name() {
//		return name;
//	}
//};
//int Person::count = 0;
//
//class Student : public Person {
//public:
//	~Student() {
//		cout << "학생의 소멸자입니다.\n";
//	}
//	void info() {                               // 재정의
//		cout << "학생입니다.\n";
//	}
//	void test() {                               // 재정의
//		cout << "학생의 test 함수\n";
//	}
//};
//class instructor : public Person {
//public:
//	~instructor() {
//		cout << "강사의 소멸자입니다.\n";
//	}
//	void info() {
//		cout << "강사입니다.\n";
//	}
//};
//
//int main() {
//	// static멤버 객체를 따로 만들지 않아도 가능
//	Person::static_method();
//	cout << Person::get_count() << endl;
//	// info -> 객체를 꼭 생성해야 한다.
//	Person p;
//	p.info();
//	p.static_method();
//
//	// static 멤버는 모든 객체가 하나의 공간을 공유한다.
//	// name static 멤버 x -> 객체 별로 공간이 따로 할당됨.
//	// static_var 멤버 O -> 객체 별로 공간이 따로 할당되지 않고, 모든 객체가 같은 공간을 공유.
//	Person p1;
//	p1.set_name("홍길동");
//
//	Person p2;
//	cout << Person::get_count() << "명" << endl;
//
//	//cout << p.get_count() << " " << Person::get_count() << " " << p1.get_count() << endl; // 3 3 3
//	
//	//Person* p3[5]{};
//	for (int i = 0; i < 5; i++) {
//		p3[i] = new Person();
//	}
//	cout << Person::get_count() << "명" << endl;

	//Person* p3[5];
	//for (int i = 0; i < 5; i++) {
	//	delete p3[i];
	//}

//	cout << Person::get_count() << "명" << endl;
//
//	std::vector<Person*> persons = {new Person(), new Person()};
//
//	cout << Person::get_count() << "명" << endl;
//
//	persons.push_back(new Person());
//	cout << Person::get_count() << "명" << endl;
//
//	int size = persons.size();
//	for (int i = 0; i < size; i++) {
//		delete persons.at(i);
//	}
//	for (int i = 0; i < size; i++) {
//		persons.pop_back();
//	}
//	return 0;
//}