////#include<iostream>
////#include<vector>
////
////int main() {
//	//std::vector<int> v; // v ���� �̸� ����
//	//std::vector<int> v(3); // ũ�Ⱑ 3�� ���� �迭 ����
//	//std::vector<int> v( 3,1 ); // ũŰ�� 3�� ���� �迭 ����, ���Ҹ� ��� 1�� �ʱ�ȭ 
//	//std::vector<int> v = { 1, 2, 3 }; // ũ�Ⱑ 3�� ���� �迭 ���� �� �ʱ�ȭ
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
//	////v.assign(num, 1); // num�� ũ��, ��� ���� 1�� �Ҵ�
//
//	//for (int i = 0; i < v.size(); i++) {
//	//	std::cout << v[i] << " ";
//	//}
//	//std::cout << std::endl;
//
//	//v.push_back(10); // �迭�� �������� ���ϴ� ���� 10�� �߰��� {1, 2, 3, 4, 5, 10}
//	//for (int i = 0; i < v.size(); i++) {
//	//	std::cout << v[i] << " ";
//	//}
//	//std::cout << std::endl;
//
//	v.resize(6, 0); // �迭�� ũ�⸦ resize Ŀ�� ���̸�ŭ 0���� �ʱ�ȭ
//	v.push_back(10); // �迭�� �������� ���ϴ� ���Ҹ� �߰��� {1, 2, 3, 4, 5, 10}
//	for (int i = 0; i < v.size(); i++) {
//		std::cout << v[i] << " ";
//	}
//	std::cout << std::endl;
//
//	v.pop_back(); // ������ ���Ҹ� ����
//	for (int i = 0; i < v.size(); i++) {
//		std::cout << v[i] << " ";
//	}
//	std::cout << std::endl;
//
//	std::cout << v.front() << " ";  // �Ǿ��� �� ���
//	std::cout << v.back() << " ";   // �ǵ��� �� ���
//
//	std::cout << std::endl;
//
//	v.insert(v.begin() + 2, 99);  // 2�� ���� �ڿ� 99�� ���� 
//	for (int i = 0; i < v.size(); i++) {
//		std::cout << v.at(i) << " ";
//	}
//	std::cout << std::endl;
//
//	v.erase(v.begin() + 3);  // 3�� ���Ҹ� ����
//	for (int i = 0; i < v.size(); i++) {
//		std::cout << v.at(i) << " ";
//	}
//	std::cout << std::endl;
//
//	v.erase(v.begin() + 3, v.begin() + 5);  // 3��, 4�� ���� ����  
//	for (int i = 0; i < v.size(); i++) {
//		std::cout << v.at(i) << " ";
//	}
//	std::cout << std::endl;
//
//	//v.clear();  // �迭�� ��� ���� ����, size 0
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
//	// 2���� ����
//
//	std::vector<std::vector<int>> v2;
//	v2.assign(3, std::vector<int>(2,1)); // 3 X 2 �࿭ ����
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