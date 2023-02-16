#include <iostream>

using std::string;
using std::cout;
using std::cin;
using std::endl;

class Shape {
protected:
	virtual void draw() = 0;
};
class Circle : public Shape {
public:
	void draw() {
		cout << "Circle" << endl;
	}
};
class Rect : public Shape {
public:
	void draw() {
		cout << "Rectangle" << endl;
	}
};
class Tria : public Shape {
public:
	void draw() {
		cout << "Triangle" << endl;
	}
};

int main() {

	Circle cir;
	Rect rec;
	Tria tri;
	cir.draw();
	rec.draw();
	tri.draw();

	return 0;
}