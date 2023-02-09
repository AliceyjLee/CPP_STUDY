//#include<iostream>
//#include<string>
//
//int main() {
//	// num을 받어서 num X num 배열
//	int num;
//	std::cin >> num;
//	int** num_arr = new int* [num]; // 동적배열 1번 -> 반납 1번
//	for ( int i = 0; i < num; i++) {
//		num_arr[i] = new int[num];  // 동적배열 2번 -> 반납 2번
//	}
//	// {{1, 2},{2, 4}}
//
//	for (int i = 0; i < num; i++) {              // 동적배열엔 for each문 사용 X
//		for (int j = 0; j < num; j++) {
//			num_arr[i][j] = 1;
//			std::cout << num_arr[i][j] << " ";
//		}
//		std::cout << std::endl;
//	}
//
//	for (int i = 0; i < num; i++) {
//		delete[] num_arr[i];  // 반납 2번
//	}
//	delete[] num_arr;  // 반납 1번
//
//}