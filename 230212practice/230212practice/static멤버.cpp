//#include<iostream>
//#include<vector>
//
//using std::string;
//using std::cout;
//using std::cin;
//using std::endl;
//
//// ��� -> �ʵ�, �޼ҵ� �� �� ���� ��
//
//class Person {
//protected:
//	string name;
//	static int count;
//public:
//	static void static_method() {
//		// name = "ȫ�浿"; 
//		// set_name("�ƹ���");  // static �޼ҵ� �ȿ����� �Ϲ� ����� ���� �� �� ����.
//		cout << "����ƽ �޼ҵ� �׽�Ʈ" << endl;
//	}
//	static int get_count() {
//		return count;
//	}
//	Person() {
//		this->name = "�ƹ���";
//		count++;
//	}
//	virtual ~Person() {
//		cout << "����� �Ҹ����Դϴ�.\n";
//		count--;
//	}
//	virtual void info() {
//		cout << "����Դϴ�.\n";
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
//		cout << "�л��� �Ҹ����Դϴ�.\n";
//	}
//	void info() {                               // ������
//		cout << "�л��Դϴ�.\n";
//	}
//	void test() {                               // ������
//		cout << "�л��� test �Լ�\n";
//	}
//};
//class instructor : public Person {
//public:
//	~instructor() {
//		cout << "������ �Ҹ����Դϴ�.\n";
//	}
//	void info() {
//		cout << "�����Դϴ�.\n";
//	}
//};
//
//int main() {
//	// static��� ��ü�� ���� ������ �ʾƵ� ����
//	Person::static_method();
//	cout << Person::get_count() << endl;
//	// info -> ��ü�� �� �����ؾ� �Ѵ�.
//	Person p;
//	p.info();
//	p.static_method();
//
//	// static ����� ��� ��ü�� �ϳ��� ������ �����Ѵ�.
//	// name static ��� x -> ��ü ���� ������ ���� �Ҵ��.
//	// static_var ��� O -> ��ü ���� ������ ���� �Ҵ���� �ʰ�, ��� ��ü�� ���� ������ ����.
//	Person p1;
//	p1.set_name("ȫ�浿");
//
//	Person p2;
//	cout << Person::get_count() << "��" << endl;
//
//	//cout << p.get_count() << " " << Person::get_count() << " " << p1.get_count() << endl; // 3 3 3
//	
//	//Person* p3[5]{};
//	for (int i = 0; i < 5; i++) {
//		p3[i] = new Person();
//	}
//	cout << Person::get_count() << "��" << endl;

	//Person* p3[5];
	//for (int i = 0; i < 5; i++) {
	//	delete p3[i];
	//}

//	cout << Person::get_count() << "��" << endl;
//
//	std::vector<Person*> persons = {new Person(), new Person()};
//
//	cout << Person::get_count() << "��" << endl;
//
//	persons.push_back(new Person());
//	cout << Person::get_count() << "��" << endl;
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