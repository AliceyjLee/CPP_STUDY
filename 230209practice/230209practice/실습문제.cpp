#include<iostream>

using std::string;
using std::cout;
using std::cin;
using std::endl;

//(1) Shape��� Ŭ������ ������ּ���.�� Ŭ������ �Ʒ� ������ �����ؾ� �մϴ�.
//���� 1. ���� ����, �غ��� ���̸� �����ϴ� ������ ������ �־�� �մϴ�
//���� 2. ���� ������ �غ��� ���̸� ����ϴ� printInfo() �Լ��� ������ �־�� �մϴ�.
//(2) Shape Ŭ������ ��� �޴� Rectangle, Triangle Ŭ������ ������ּ���.�� Ŭ�������� �Ʒ� ������ �����ؾ� �մϴ�.
//���� 1. Rectangle Ŭ�������� ���� ���̸� �ǹ��ϴ� ������ ������ �־�� �մϴ�.
//���� 2. Triangle Ŭ�������� ���� ���̸� �ǹ��ϴ� ������ ������ �־�� �մϴ�.
//���� 3. �� Ŭ�������� ���� ������ ���̸� ���ϰ� ����ϴ� area() �Լ��� ������ �־�� �մϴ�.
//���� 4. �� Ŭ���� ��� �����ڿ��� ��� ������ ���� �������ּ���. (��, �غ��� ����)
//(3) ���� �Լ����� Triangle�� Rectangle Ŭ������ ���� ���� �ν��Ͻ��� ����� area() �Լ��� �����Ű���� ������ּ���.

// ���� ���� = line_num , �غ��� ���� = width, ������ ���� = length, ������ ���� = height

class Shape {
protected:	
	int line_num;
	double width;
public:
	void print_info() {
		cout << "���� ���� : " << line_num << "�غ��� ���� : " << width << endl;
	}
};
class Rectangle : public Shape {
	double length;
public:
	Rectangle(double width, double length, int line_num) {
		this->width = width;
		this->length = length;
		this->line_num = line_num;
	}
	void area() {
		cout << "���簢�� ���� : " << width * length << endl;
	}
};
class Triangle : public Shape {
	double height;
public:
	Triangle(double width,int line_num, double height) {
		this->width = width;
		this->line_num = line_num;
		this->height = height;
	}
	void area() {
		cout << "�ﰢ���� ���� : " << width * height / 2 << endl;
	}
};

int main() {

	double n1;
	double n2;

	cout << "���簢�� ���� ���ϱ� : " << endl;
	cin >> n1;
	cin >> n2;

	Rectangle b(n1, n2, 4);

	b.area();

	cout << "�ﰢ�� ���� ���ϱ� : " << endl;
	cin >> n1;
	cin >> n2;
	
	Triangle a(n1, 3, n2);

	a.area();

	return 0;
}