#include <iostream>

using std::string;
using std::cout;
using std::cin;
using std::endl;

class Snack {
protected:
	int price;
	string name;
	string manufacturer;
public:
	string get_name() {
		return name;
	}
};

class Candy : public Snack {
	string flavor;
public:
	Candy(string flavor,int price, string name, string manufacturer) {
		this->flavor = flavor;
		this->price = price;
		this->name = name;
		this->manufacturer;
	}
	Candy(string name) {
		this->name = name;
	}

};

class Chocolate : public Snack {
	string shape;
public:
	Chocolate(string shape,int price, string name, string manufacturer) {
		this->shape = shape;
		this->price = price;
		this->name = name;
		this->manufacturer;
	}
	Chocolate(string name) {
		this->name = name;
	}
};

int main() {

	Snack snack_basket[4] = {Candy("µş±â¸À",100,"ÃòÆÄ®½º","·Ôµ¥"), Candy("Æ÷µµ¸À",200,"Ã»Æ÷µµ","³ó½É"),Chocolate("º°¸ğ¾ç",300,"Æ®À¨½º","¿À¸®¿Â"),Chocolate("½ºÆ½Çü",400,"ÀÚÀ¯½Ã°£","ÇØÅÂ")};

	for (int i = 0; i < 4; i++) {
		cout << snack_basket[i].get_name() << endl;
	}


	return 0;
}