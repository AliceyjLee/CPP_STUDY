#include<iostream>

class rectangle {
	private:
		double width = 0;
		double height = 0;
	public:
		rectangle(double width, double height) {
			this->width = width;
			this->height = height;
		}
		double area() {
			return width * height;
		}
};

int main() {

	double width, height;
	std::cout << "가로, 세로 길이를 입력하세요. " << std::endl;
	std::cin >> width >> height;

	rectangle A(width, height);
	std::cout << "넓이는 : " << A.area();

	return 0;
}