#include<iostream>
#include<string>
#include<vector>

int main() {

	//int x;
	//int y;
	//int sum = 1;

	//std::cout << "x�� �Է��ϼ��� : ";
	//std::cin >> x;
	//std::cout << "y�� �Է��ϼ��� : ";
	//std::cin >> y;

	//if (x < 0 || y < 0) {
	//	std::cout << "x�� y ��� ����� �Է����ּ���. " << std::endl;
	// }
	//	
	//int** num_arr = new int* [x]; 
	//for (int i = 0; i < x; i++) {
	//	num_arr[i] = new int[y];  
	//}

	//for (int i = 0; i < x; i++) {              
	//	for (int j = 0; j < y; j++) {
	//		num_arr[i][j] = sum;
	//		sum = sum + 1;
	//		std::cout << num_arr[i][j] << " ";
	//	}
	//	std::cout << std::endl;
	//}
	//for (int i = 0; i < x; i++) {
	//	delete[] num_arr[i];  
	//	}
	//delete[] num_arr;  
	//

	// ����� ��� 

//	int x, y;
//
//	while(1) { // �ݺ��� �� �ֵ��� while���� ���
//		std::cout << "x�� �Է� : ";
//		std::cin >> x;
//		std::cout << "y�� �Է� : ";
//		std::cin >> y;
//		if (x > 0 && y > 0) break;
//		else std::cout << "�� �� ��� ����� �Է����ּ���.";
//	}
//
//	int** arr2 = new int* [x];
//	for (int i = 0; i < x; i++); {
//		arr2[i] = new int[y];        // i �ĺ���??????????????
//	}
//
//	int num = 1;
//	for (int i = 0; i < x; i++) {
//		for (int j = 0; j < y; j++) {
//			arr2[i][j] = num++;
//			std::cout << arr2[i][j] << " ";
//		}
//		std::cout << std::endl;
//	}
//	for (int i = 0; i < x; i++) {
//		delete[] arr2[i];
//	}
//	delete arr2;
//
	//int num1;
	//double sum1 = 0.0;
	//std::cout << "�л� �� : ";
	//std::cin >> num1;

	//int* grade = new int[num1];
	//for (int i = 0; i < num1; i++) {
	//	std::cout << i + 1 << "�� �л��� ������ �Է��ϼ���. : " << std::endl;
	//	std::cin >> grade[i];
	//	sum1 = sum1 + grade[i];
	//}
	//std::cout << "������� : " << sum1 / num1;

	//delete[]grade;

	//int x, y;
	//
	//while (1) {
	//	std::cout << "x�� �Է� : ";
	//	std::cin >> x;
	//	std::cout << "y�� �Է� : ";
	//	std::cin >> y;
	//	if (x > 0 && y > 0) break;
	//	else std::cout << "�� �� ��� ����� �Է����ּ���.";
	//}

	//int num2 = 1;
	//std::vector<std::vector<int>> v2;
	//v2.assign(x, std::vector<int>(y, 1));

	//for (int i = 0; i < v2.size(); i++) {
	//	for (int j = 0; j < v2.at(i).size(); j++) {    	
	//		v2[i][j] = num2;
	//		num2 = num2 + 1;
	//		std::cout << v2[i][j] << " ";
	//	}
	//	std::cout << std::endl;
	//}

	std::vector<int> v;
	int num4 = 1;
	int sum4 = 0;
	int add = 0;

	while (num4!= 0) {
		std::cout << "���ڸ� �Է��ϼ��� (0:EXIT) : " << std::endl;
		std::cin >> num4;
		v.push_back(num4); //  ����ڰ� �Է��� ���ڵ�(num4)�� ���� ������� ����
		add = add + 1;
		sum4 += num4;
	}
	std::cout << "�Է��� ������ ���� : " << sum4 << std::endl;



	return 0;
}