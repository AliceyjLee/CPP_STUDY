#include <iostream>
#include <vector>


using std::string;
using std::cout;
using std::cin;
using std::endl;

class Snack {
protected:
	int price = 0;
	string name;
	string manufacturer;
	static int count;
public:
	static int get_count() {
		return count;
	}
	string get_name() {
		return name;
	}
	virtual void info() {

	}
};

int Snack::count = 0;

class Candy : public Snack {
	string flavor;
public:
	Candy(string flavor, int price, string name, string manufacturer) {
		this->flavor = flavor;
		this->price = price;
		this->name = name;
		this->manufacturer;
		count++;
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
		count++;
	}
	Chocolate(string name) {
		this->name = name;
	}
	void info() {
		cout << name << " " << shape << " ÃÊÄÝ¸´ÀÔ´Ï´Ù." << endl;
	}
};

int main() {

	//Snack* snack_basket[4]{};
	//snack_basket[0] = new Candy("µþ±â¸À", 100, "ÃòÆÄ®½º", "·Ôµ¥");
	//snack_basket[1] = new Candy("Æ÷µµ¸À", 200, "Ã»Æ÷µµ", "³ó½É");
	//snack_basket[2] = new Chocolate("º°¸ð¾ç", 300, "Æ®À¨½º", "¿À¸®¿Â");
	//snack_basket[3] = new Chocolate("½ºÆ½Çü", 400, "ÀÚÀ¯½Ã°£", "ÇØÅÂ");

	int price;
	string name;
	string manufacturer;
	string flavor;
	string shape;

	std::vector <Snack*> snacks = {};

	int control;
	int size;
	while (true) {
		cout << "°úÀÚ ¹Ù±¸´Ï¿¡ Ãß°¡ÇÒ °£½ÄÀ» °í¸£½Ã¿À. ( 1:Äµµð, 2:ÃÊÄÝ¸´, 0:Á¾·á ) :" << endl;
		cin >> control;
		 if (control == 1) {
			 cout << "¸ÀÀ» ÀÔ·ÂÇÏ¼¼¿ä. -> " << endl;
			 cin >> flavor;
			 cout << "°¡°ÝÀ» ÀÔ·ÂÇÏ¼¼¿ä. -> " << endl;
			 cin >> price;
			 cout << "»óÇ°ÀÌ¸§Àº ÀÔ·ÂÇÏ¼¼¿ä. -> " << endl;
			 cin >> name;
			 cout << "Á¦Á¶»ç¸¦ ÀÔ·ÂÇÏ¼¼¿ä. -> " << endl;
			 cin >> manufacturer;

			 snacks.push_back(new Candy(flavor, price, name, manufacturer));
			 
		}
		else if (control == 2) {
			 cout << "¸ð¾çÀ» ÀÔ·ÂÇÏ¼¼¿ä. -> " << endl;
			 cin >> shape;
			 cout << "°¡°ÝÀ» ÀÔ·ÂÇÏ¼¼¿ä. -> " << endl;
			 cin >> price;
			 cout << "»óÇ°ÀÌ¸§Àº ÀÔ·ÂÇÏ¼¼¿ä. -> " << endl;
			 cin >> name;
			 cout << "Á¦Á¶»ç¸¦ ÀÔ·ÂÇÏ¼¼¿ä. -> " << endl;
			 cin >> manufacturer;

			 snacks.push_back(new Chocolate(shape, price, name, manufacturer)); 
		}
		else if (control == 0) {
			 cout << "¹Ù±¸´Ï¿¡ ´ã±ä °£½ÄÀÇ °¹¼ö´Â" << " " << Snack::get_count() << "°³ ÀÔ´Ï´Ù." << endl;
			 cout << "¹Ù±¸´Ï¿¡ ´ã±ä °£½Ä È®ÀÎÇÏ±â !" << endl;
		
				break;
			 }
		else {
			cout << "0~2 »çÀÌÀÇ ¼ö¸¦ ÀÔ·ÂÇØÁÖ¼¼¿ä." << endl;
			}
	}
	size = snacks.size();
	for (int i = 0; i < size; i++)
		snacks.at(i)->info();
	
	for (int i = 0; i < size; i++) {
		delete snacks.at(i);
	}
	for (int i = 0; i < size; i++) {
		snacks.pop_back();
	}
return 0;
}