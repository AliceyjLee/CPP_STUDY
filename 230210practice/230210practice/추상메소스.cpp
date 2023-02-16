#include <iostream>

using std::string;
using std::cout;
using std::cin;
using std::endl;

class Elec {  // 추상 클래스
public:
	virtual void on() = 0;  // 추상 메소드 ( 순수 가상 함수 )
	//void on() {  // 가상 함수

	//}
	virtual void off() = 0;
	//void off() {

	//}
};
class TV : public Elec {
public:
	void on() {
		cout << "TV켜기" << endl;
	}
	void off() {
		cout << "TV끄기" << endl;
	}
};
class Radio : public Elec {

};
int main() {

	//Elec elec; // 오류 : 추상 클래스로는 객체를 생성할 수 없음

	TV tv;
	tv.on();
	tv.off();


	return 0;
}