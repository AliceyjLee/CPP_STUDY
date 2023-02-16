#include <iostream>

using std::string;
using std::cout;
using std::cin;
using std::endl;

// 02/12 ½Ç¹®ÀÌ¾î¼­ 
//4°³ÀÇ ÀÎ½ºÅÏ½º¸¦ ¸ðµÎ ³Ö¾ú´Ù¸é ¸ÞÀÎ ÇÔ¼ö¿¡¼­ ¹Ýº¹¹®À» ÅëÇØ snacknasket ¾È¿¡ µé¾î ÀÖ´Â °£½ÄµéÀÇ ¸À or ¸ð¾ç°ú »óÇ°ÀÌ¸§À» 
//Ãâ·ÂÇØÁÖ¼¼¿ä. EX) µþ±â¸À »çÅÁÀÔ´Ï´Ù. ÇÏÆ® ¸ð¾ç ÃÊÄÝ¸´ ÀÔ´Ï´Ù.

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
		cout << name << " " << flavor << " ÄµµðÀÔ´Ï´Ù." << endl;
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
		cout << name << " " << shape << " ÃÊÄÝ¸´ÀÔ´Ï´Ù." << endl;
	}
};

int main() {

	Snack* snack_basket[4] = { new Candy("µþ±â¸À",100,"ÃòÆÄ®½º","·Ôµ¥"), new Candy("Æ÷µµ¸À",200,"Ã»Æ÷µµ","³ó½É"), new Chocolate("º°¸ð¾ç",300,"Æ®À¨½º","¿À¸®¿Â"),new Chocolate("½ºÆ½Çü",400,"ÀÚÀ¯½Ã°£","ÇØÅÂ") };


	for (int i = 0; i < 4; i++) {
		snack_basket[i]->info();
	}
	for (int i = 0; i < 4; i++) {
		delete snack_basket[i];
	}


	return 0;
}