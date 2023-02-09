////#include<iostream>
////#include<vector>
////
////int main() {
//	//std::vector<int> v; // v 변수 이름 지정
//	//std::vector<int> v(3); // 크기가 3인 벡터 배열 생성
//	//std::vector<int> v( 3,1 ); // 크키가 3인 벡터 배열 선언, 원소를 모두 1로 초기화 
//	//std::vector<int> v = { 1, 2, 3 }; // 크기가 3인 벡터 배열 선언 및 초기화
//
//	//std::vector<int> v = { 1, 2, 3, 4, 5 };
//		//for (int i = 0; i < v.size(); i++) {
//		//	std::cout << v[i] << " ";
//		//	//std::cout << v.at(i) << " ";
//		//}
//
//	//int num;
//	//std::cin >> num;
//	//std::vector<int> v = {1, 2, 3, 4, 5};
//	////v.assign(num, 1); // num의 크기, 모든 원소 1로 할당
//
//	//for (int i = 0; i < v.size(); i++) {
//	//	std::cout << v[i] << " ";
//	//}
//	//std::cout << std::endl;
//
//	//v.push_back(10); // 배열의 마지막에 원하는 원소 10을 추가함 {1, 2, 3, 4, 5, 10}
//	//for (int i = 0; i < v.size(); i++) {
//	//	std::cout << v[i] << " ";
//	//}
//	//std::cout << std::endl;
//
//	v.resize(6, 0); // 배열의 크기를 resize 커진 길이만큼 0으로 초기화
//	v.push_back(10); // 배열의 마지막에 원하는 원소를 추가함 {1, 2, 3, 4, 5, 10}
//	for (int i = 0; i < v.size(); i++) {
//		std::cout << v[i] << " ";
//	}
//	std::cout << std::endl;
//
//	v.pop_back(); // 마지막 원소를 삭제
//	for (int i = 0; i < v.size(); i++) {
//		std::cout << v[i] << " ";
//	}
//	std::cout << std::endl;
//
//	std::cout << v.front() << " ";  // 맨앞의 값 출력
//	std::cout << v.back() << " ";   // 맨뒤의 값 출력
//
//	std::cout << std::endl;
//
//	v.insert(v.begin() + 2, 99);  // 2번 원소 뒤에 99를 삽입 
//	for (int i = 0; i < v.size(); i++) {
//		std::cout << v.at(i) << " ";
//	}
//	std::cout << std::endl;
//
//	v.erase(v.begin() + 3);  // 3번 원소를 삭제
//	for (int i = 0; i < v.size(); i++) {
//		std::cout << v.at(i) << " ";
//	}
//	std::cout << std::endl;
//
//	v.erase(v.begin() + 3, v.begin() + 5);  // 3번, 4번 원소 삭제  
//	for (int i = 0; i < v.size(); i++) {
//		std::cout << v.at(i) << " ";
//	}
//	std::cout << std::endl;
//
//	//v.clear();  // 배열의 모든 원소 삭제, size 0
//	//for (int i = 0; i < v.size(); i++) {
//	//	std::cout << v.at(i) << " ";
//	//}
//	//std::cout << std::endl;
//
//	for (int &vv : v) {
//		std::cout << vv << " ";
//	}
//	std::cout << std::endl;
//
//
//	// 2차원 벡터
//
//	std::vector<std::vector<int>> v2;
//	v2.assign(3, std::vector<int>(2,1)); // 3 X 2 행열 생성
//	// {{1, 1},{1, 1},{1, 1}}
//
//
//	for (int i = 0; i < v2.size(); i++) {
//		for (int j = 0; j < v2.at(i).size(); j++) {    // v2.at(i) = v2[i]
//			std::cout << v2[i][j] << " ";
//		}
//		std::cout << std::endl;
//	}
//
//
//	for (std::vector<int> vv2 : v2) {
//		for (int vv2 : vv2) {
//			std::cout << vv2 << " ";
//		}
//		std::cout << std::endl;
//	}
//
//
//	return 0;
//	
//}