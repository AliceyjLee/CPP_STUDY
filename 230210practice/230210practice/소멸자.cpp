#include <iostream>

using std::string;
using std::cout;
using std::cin;
using std::endl;

// �ʵ�(����), �޼ҵ�(�Լ�), ������(�޼ҵ��� ����), �Ҹ���(�޼ҵ��� ����)

class Person {
	int age = 0;
	string name;
	int* p = new int[3];
public:
	Person() {  // ������
		cout << "������ ����" << endl;
	}   
	Person(string name) {  // ������
		cout << "������ ���� 2" << endl;
	}
	void test() {   // �޼ҵ�
		cout << "test" << endl;
	}
	~Person() {    // �Ҹ��� 
		delete[] p;
		cout << "�Ҹ��� ����" << endl;
	}
};
int main() {

	//Person p;
	Person p("aaa");
	p.test();

	Person p2;

	return 0;
}