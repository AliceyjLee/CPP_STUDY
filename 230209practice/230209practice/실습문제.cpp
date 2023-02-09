#include<iostream>

using std::string;
using std::cout;
using std::cin;
using std::endl;

//(1) Shape라는 클래스를 만들어주세요.이 클래스는 아래 조건을 만족해야 합니다.
//조건 1. 변의 개수, 밑변의 길이를 저장하는 변수를 가지고 있어야 합니다
//조건 2. 변의 개수와 밑변의 길이를 출력하는 printInfo() 함수를 가지고 있어야 합니다.
//(2) Shape 클래스를 상속 받는 Rectangle, Triangle 클래스를 만들어주세요.이 클래스들은 아래 조건을 만족해야 합니다.
//조건 1. Rectangle 클래스에는 세로 길이를 의미하는 변수를 가지고 있어야 합니다.
//조건 2. Triangle 클래스에는 높이 길이를 의미하는 변수를 가지고 있어야 합니다.
//조건 3. 두 클래스에는 각각 도형의 넓이를 구하고 출력하는 area() 함수를 가지고 있어야 합니다.
//조건 4. 두 클래스 모두 생성자에서 모든 변수에 값을 대입해주세요. (변, 밑변도 대입)
//(3) 메인 함수에서 Triangle과 Rectangle 클래스를 통해 각각 인스턴스를 만들고 area() 함수를 실행시키도록 만들어주세요.

// 변의 개수 = line_num , 밑변의 길이 = width, 세로의 길이 = length, 높이의 길이 = height

class Shape {
protected:	
	int line_num;
	double width;
public:
	void print_info() {
		cout << "변의 갯수 : " << line_num << "밑변의 길이 : " << width << endl;
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
		cout << "직사각형 넓이 : " << width * length << endl;
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
		cout << "삼각형의 넓이 : " << width * height / 2 << endl;
	}
};

int main() {

	double n1;
	double n2;

	cout << "직사각형 넓이 구하기 : " << endl;
	cin >> n1;
	cin >> n2;

	Rectangle b(n1, n2, 4);

	b.area();

	cout << "삼각형 넓이 구하기 : " << endl;
	cin >> n1;
	cin >> n2;
	
	Triangle a(n1, 3, n2);

	a.area();

	return 0;
}