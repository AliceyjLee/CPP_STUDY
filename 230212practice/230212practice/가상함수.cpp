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
		cout << "����� �Ҹ����Դϴ�.\n";
	}
	virtual void info() {
		cout << "����Դϴ�.\n";
	}
};
class Student : public Person {
public:
	~Student() {
		cout << "�л��� �Ҹ����Դϴ�.\n";
	}
	void info() {                               // ������
		cout << "�л��Դϴ�.\n";
	}
	void test() {                               // ������
		cout << "�л��� test �Լ�\n";
	}
};
class instructor : public Person {
public:
	~instructor() {
		cout << "������ �Ҹ����Դϴ�.\n";
	}
	void info() {
		cout << "�����Դϴ�.\n";
	}
};

int main() {
	/*   
	Person s = Student();   // student �����ϸ� Person�� �����, 
	s.info();  // ���� ���ε� -> ����Դϴ� ���
	
	// �����ͷ� ��ü����� ���� ���ε��� ����
	Person* ss = new Student();           // ��ü�� �����ͷ� ���������� ���� �޸� �Ҵ�
	ss->info();             // ss�� ���� �����´� (delete �ʿ�) -> �л��Դϴ� ���
	(*ss).info();           // *ss �ּҿ� ��� ���� �����´� (delete ���ʿ�)
	// ss.test();           // Person�� ���°� ������ ����
	delete ss;

	// ���� �߿� �Ҵ�� �޸𸮸� ����ϹǷ� �ڵ����� delete�� ��. ����ϸ� ��Ÿ�� �����߻�
	Student stu;
	Person* sss = &stu;              
	// delete sss; 
	*/
	//��ĳ����
	Person* per_arr[3] = { new Student(), new instructor(), new Student() };
	for (int i = 0; i < 3; i++) {
		per_arr[i]->info();
	}
	for (int i = 0; i < 3; i++) {
		delete per_arr[i];
	}
	return 0;
}