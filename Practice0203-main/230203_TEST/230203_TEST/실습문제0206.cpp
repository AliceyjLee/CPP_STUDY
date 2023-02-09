#include<iostream>
#include<string>
#include<vector>

int main() {

	//int x;
	//int y;
	//int sum = 1;

	//std::cout << "x를 입력하세요 : ";
	//std::cin >> x;
	//std::cout << "y를 입력하세요 : ";
	//std::cin >> y;

	//if (x < 0 || y < 0) {
	//	std::cout << "x와 y 모두 양수를 입력해주세요. " << std::endl;
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

	// 강사님 답안 

//	int x, y;
//
//	while(1) { // 반복할 수 있도록 while문을 사용
//		std::cout << "x를 입력 : ";
//		std::cin >> x;
//		std::cout << "y를 입력 : ";
//		std::cin >> y;
//		if (x > 0 && y > 0) break;
//		else std::cout << "두 수 모두 양수를 입력해주세요.";
//	}
//
//	int** arr2 = new int* [x];
//	for (int i = 0; i < x; i++); {
//		arr2[i] = new int[y];        // i 식별자??????????????
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
	//std::cout << "학생 수 : ";
	//std::cin >> num1;

	//int* grade = new int[num1];
	//for (int i = 0; i < num1; i++) {
	//	std::cout << i + 1 << "번 학생의 성적을 입력하세요. : " << std::endl;
	//	std::cin >> grade[i];
	//	sum1 = sum1 + grade[i];
	//}
	//std::cout << "성적평균 : " << sum1 / num1;

	//delete[]grade;

	//int x, y;
	//
	//while (1) {
	//	std::cout << "x를 입력 : ";
	//	std::cin >> x;
	//	std::cout << "y를 입력 : ";
	//	std::cin >> y;
	//	if (x > 0 && y > 0) break;
	//	else std::cout << "두 수 모두 양수를 입력해주세요.";
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
		std::cout << "숫자를 입력하세요 (0:EXIT) : " << std::endl;
		std::cin >> num4;
		v.push_back(num4); //  사용자가 입력한 숫자들(num4)의 값을 순서대로 저장
		add = add + 1;
		sum4 += num4;
	}
	std::cout << "입력한 숫자의 합은 : " << sum4 << std::endl;



	return 0;
}