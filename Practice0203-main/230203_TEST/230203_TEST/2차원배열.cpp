//#include<iostream>
//#include<string>
//
//int main() {
//	// num�� �޾ num X num �迭
//	int num;
//	std::cin >> num;
//	int** num_arr = new int* [num]; // �����迭 1�� -> �ݳ� 1��
//	for ( int i = 0; i < num; i++) {
//		num_arr[i] = new int[num];  // �����迭 2�� -> �ݳ� 2��
//	}
//	// {{1, 2},{2, 4}}
//
//	for (int i = 0; i < num; i++) {              // �����迭�� for each�� ��� X
//		for (int j = 0; j < num; j++) {
//			num_arr[i][j] = 1;
//			std::cout << num_arr[i][j] << " ";
//		}
//		std::cout << std::endl;
//	}
//
//	for (int i = 0; i < num; i++) {
//		delete[] num_arr[i];  // �ݳ� 2��
//	}
//	delete[] num_arr;  // �ݳ� 1��
//
//}