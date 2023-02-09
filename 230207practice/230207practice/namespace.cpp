#include <iostream>

namespace ns_test {
	int num = 0;
	void test() { 
		std::cout << num << std::endl;
		std::cout << "Hello World" << std::endl;
	}
}
//using namespace std; // std 네임스페이스 내에 있는 모든 요소에 대한 접근을 풀어줌 ( 함수 안에 std 안써도 됌 )
//using std::cout; // 네임스페이스 std::cout만 접근을 풀어줌
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
	//ns_test::num = 1; // namespace에서 가져오는 num
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