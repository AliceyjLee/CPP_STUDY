#include <iostream>

using std::string;
using std::cout;
using std::cin;
using std::endl;

// 02/12 실문이어서 
//4개의 인스턴스를 모두 넣었다면 메인 함수에서 반복문을 통해 snacknasket 안에 들어 있는 간식들의 맛 or 모양과 상품이름을 
//출력해주세요. EX) 딸기맛 사탕입니다. 하트 모양 초콜릿 입니다.

class Snack {
protected:
	int price;
	string name;
	string manufacturer;
public:
	string get_name() {
		return name;
	}
	virtual void info() {

	}
};

class Candy : public Snack {
	string flavor;
public:
	Candy(string flavor, int price, string name, string manufacturer) {
		this->flavor = flavor;
		this->price = price;
		this->name = name;
		this->manufacturer;
	}
	Candy(string name) {
		this->name = name;
	}
	void info() {
		cout << name << " " << flavor << " 캔디입니다." << endl;
	}

};

class Chocolate : public Snack {
	string shape;
public:
	Chocolate(string shape, int price, string name, string manufacturer) {
		this->shape = shape;
		this->price = price;
		this->name = name;
		this->manufacturer;
	}
	Chocolate(string name) {
		this->name = name;
	}
	void info(){
		cout << name << " " << shape << " 초콜릿입니다." << endl;
	}
};

int main() {

	Snack* snack_basket[4] = { new Candy("딸기맛",100,"츄파츕스","롯데"), new Candy("포도맛",200,"청포도","농심"), new Chocolate("별모양",300,"트윅스","오리온"),new Chocolate("스틱형",400,"자유시간","해태") };


	for (int i = 0; i < 4; i++) {
		snack_basket[i]->info();
	}
	for (int i = 0; i < 4; i++) {
		delete snack_basket[i];
	}


	return 0;
}