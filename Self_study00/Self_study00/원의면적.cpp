#include<iostream>
#include<cstring>
#include<string>

using std::string;
using std::cout;
using std::cin;
using std::endl;


// ���Ǹ��� ���ϱ� ������(3.14) * ������^2

int main() {

	//double pi = 0.00;
	//cout << "�������� �Է����ּ���." << endl;
	//cin >> pi;
	//int radius = 0;
	//cout << "�������� �Է����ּ���." << endl;
	//cin >> radius;
	//double area = pi * radius * radius;
	//cout << "���� ������ ? " << area << endl;

	//char name1[6] = { 'G', 'r', 'a', 'c', 'e', '\0'};
	//char name2[6] = "Grace";
	//string name3 = "Chris";
	//cout << name1 << endl;
	//cout << name2 << endl;
	//cout << name3 << endl;

	// Ű���忡�� ���ڿ� �Է¹ް� ���

	//cout << "�̸��� �Է����ּ���.\n";
	//char name[6] = "Alice";
	//cin >> name;
	//cout << "�� �̸��� " << name << "�Դϴ� !\n";

	// ��Ȯ�� ��ȣ�� �Է¹��� �� ���α׷��� ��ȿ�ϴ� ���α׷��� �ۼ��ϱ�.

	//char password[11];
	//cout << "���α׷��� �����Ϸ��� ��ȣ�� �Է��ϼ���.\n";
	//while (1) {
	//	cout << "��ȣ :\n";
	//	cin >> password;
	//	if (strcmp(password,"blue")) {
	//		cout << "���α׷��� �����մϴ�.\n";
	//			break;
	//	}
	//	else {
	//		cout << "��ȣ�� Ʋ���ϴ�.\n";
	//	}
	//}

	//cin.getline�� �̿��Ͽ� ��ĭ�� �����ϴ� ���ڿ��� �д� ��

	//cout << "�ּҸ� �Է��ϼ���.\n";
	//char address[100];
	//cin.getline( address, 100, '\n' );
	//cout << "�ּҴ� " << address << " �Դϴ� !\n";

	// ���� ���� �� ����
	
	cout << "���� ���� �� ������ �մϴ�. ���� ���� �� �߿��� �Է��ϼ���." << endl;
	string game1, game2;
	cin >> game1;
	cout << "��� : " << game1 << endl;
	cin >> game2;
	cout << "�ƶ� : " << game2 << endl;
	if (game1 == game2)  {
		cout << "�����ϴ�." << endl;
	}
	else if (game1 == "����" && game2 == "����") {
		cout << "�ƶ��� �̰���ϴ�." << endl;
	}
	else if (game1 == "����" && game2 == "��") {
		cout << "����� �̰���ϴ�." << endl;
	}
	else if (game1 == "����" && game2 == "��") {
		cout << "�ƶ��� �̰���ϴ�." << endl;
	}
	else if (game1 == "��" && game2 == "����") {
		cout << "�ƶ��� �̰���ϴ�." << endl;
	}
	return 0;
}