#include<iostream>
#include<string>
#include<vector>


using std::string;
using std::cout;
using std::cin;
using std::endl;
using std::vector;

// ������ ����� 
// ����ڿ��Լ� Ȧ�� n �޾Ƽ� n*n ������ ����� 
// 1�� �� ���� ���
// 1�� Ŀ���� �� �� -> i--,j++
// �̹� ������ �Ʒ��� -> i--, j�� �״��
// 2������ ��������, ���� �� -> i->n�� , j++ 


int main() {

	// 1�� 0�� ��� ��ġ�ϱ� 

	int i = 0; // ��
	int j = 2; // ��
	int input = 0;  // �Է� ���� -> ��� ���� ũŰ ����
	int rest;       // ������

	int game[5][5] = {};

		//cout << "��� ���� ũ�⸦ �ڿ����� �Է����ּ���. -> ";
		//cin >> input;
		for (input = 1; input >= 25; input++) {
			game[i][j] = input;
			rest = input % 5;
			if (rest == 0) {
				i++;
			}
			else {
				if (--i > 0) {
					i = 4;
				}
				if (++j == 5) {
					j = 0;
				}
			}


	}

	return 0;
}