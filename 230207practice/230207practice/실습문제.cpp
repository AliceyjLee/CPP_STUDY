#include <iostream>

namespace seoul {
	std::string num;                // 변수 선언만
	std::string place;
}

namespace busan {
	std::string num;
	std::string place;
}
using namespace busan;

int main() {

	seoul::num = "02";              // 초기값 설정
	seoul::place = "광화문";
	num = "051";                    // using namespace 를 사용했기 때문에 busan:: 사용하지 않아도 됌
	place = "해운대";

	std::cout << "서울지역번호 : " << seoul::num << std::endl;
	std::cout << "부산지역번호 : " << num << std::endl;
	std::cout << "서울랜드마크 : " << seoul::place << std::endl;
	std::cout << "부산랜드마크 : " << place << std::endl;

	return 0;
}