#include <iostream>

using std::string;
using std::cout;
using std::cin;
using std::endl;

class Elec {  // �߻� Ŭ����
public:
	virtual void on() = 0;  // �߻� �޼ҵ� ( ���� ���� �Լ� )
	//void on() {  // ���� �Լ�

	//}
	virtual void off() = 0;
	//void off() {

	//}
};
class TV : public Elec {
public:
	void on() {
		cout << "TV�ѱ�" << endl;
	}
	void off() {
		cout << "TV����" << endl;
	}
};
class Radio : public Elec {

};
int main() {

	//Elec elec; // ���� : �߻� Ŭ�����δ� ��ü�� ������ �� ����

	TV tv;
	tv.on();
	tv.off();


	return 0;
}