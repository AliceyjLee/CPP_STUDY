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
	std::cout << "����, ���� ���̸� �Է��ϼ���. " << std::endl;
	std::cin >> width >> height;

	rectangle A(width, height);
	std::cout << "���̴� : " << A.area();

	return 0;
}