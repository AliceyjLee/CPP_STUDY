#include <iostream>

namespace ns_test {
	int num = 0;
	void test() { 
		std::cout << num << std::endl;
		std::cout << "Hello World" << std::endl;
	}
}
//using namespace std; // std ���ӽ����̽� ���� �ִ� ��� ��ҿ� ���� ������ Ǯ���� ( �Լ� �ȿ� std �Ƚᵵ �� )
//using std::cout; // ���ӽ����̽� std::cout�� ������ Ǯ����
//using std::cin;
//using ns_test::test;

void bbb() {
	ns_test::num = 5;
	std::cout << "aaa";
}

void aaa(){
	ns_test::num = 7;
	std::cout << "aaa : " << ns_test::num;
}

int main(){
	//ns_test::num = 1; // namespace���� �������� num
	//int num = 0;

	//cout << ns_test::num << endl;
	//cin >> num;

	//std::cout << ns_test::num << std::endl;
	//std::cout << num << std::endl;

	using namespace ns_test;
	num = 5;
	test();
	aaa();

	//ns_test::num = 5;
	//ns_test::test(); 

	return 0;


	}