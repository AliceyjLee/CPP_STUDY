#include <iostream>

namespace seoul {
	std::string num;                // ���� ����
	std::string place;
}

namespace busan {
	std::string num;
	std::string place;
}
using namespace busan;

int main() {

	seoul::num = "02";              // �ʱⰪ ����
	seoul::place = "��ȭ��";
	num = "051";                    // using namespace �� ����߱� ������ busan:: ������� �ʾƵ� ��
	place = "�ؿ��";

	std::cout << "����������ȣ : " << seoul::num << std::endl;
	std::cout << "�λ�������ȣ : " << num << std::endl;
	std::cout << "���﷣�帶ũ : " << seoul::place << std::endl;
	std::cout << "�λ귣�帶ũ : " << place << std::endl;

	return 0;
}