#include<iostream>

struct Pos {
	int x;
	int y;
};

class Cat {                              // class Cat�� ����, �⺻������ ��������
	private:
		std::string name;
		std::string breed;
		int age = 0;

	public: // �ܺ����ٰ���
		//Cat() {                  // ������  ���� ���� �ȴ�? class�� ��ü�� ���� �� �ٷ� ���� ( cout X ) publice�ȿ� �־�� ��
		//	name = "��";
		//	breed = "��";
		//	age = 1;
		//}

		Cat(std::string name, std::string breed) {  // this->name from Cat(), name from Cat(std::string name)                 
			this->name = name; 
			this->breed = breed;
	
		}
	private:
		void mew() {  // �޼ҵ�
			std::cout << "�߿�\n";
		}
		void eat() {
			std::cout << "������ �Դ´�\n";
		}

		std::string get_name() {
			return name;
		}
		std::string get_breed() {
			return breed;
		}
		int get_age() {
			return age;
		}
		//void set_name(std::string name) {  // setName
		//	this->name = name;
		//}
		//void set_breed(std::string breed) {
		//	this->breed = breed;
		//}
		//int set_age() {
		//	return age;
		//}
};
int main() {

	//Cat c; //  CatŬ����(Ʋ) c��ü(����), c��ü�� CatŬ������ �ν��Ͻ�, �� ������ Cat�� ������ �����.
	//Cat c = Cat();
	//Cat c("����", "�丣�þ�");
	//Cat c = Cat("����"); 


	std::cout << c.get_name() << " " << c.get_breed() << std::endl;
	//std::cout << c.name << " " << c.breed << std::endl;


	return 0;
}