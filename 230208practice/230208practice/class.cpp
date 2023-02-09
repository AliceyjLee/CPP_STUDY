#include<iostream>

struct Pos {
	int x;
	int y;
};

class Cat {                              // class Cat의 정의, 기본적으로 정보은닉
	private:
		std::string name;
		std::string breed;
		int age = 0;

	public: // 외부접근가능
		//Cat() {                  // 생성자  언제 실행 된다? class로 객체를 만들 때 바로 실행 ( cout X ) publice안에 있어야 함
		//	name = "모름";
		//	breed = "모름";
		//	age = 1;
		//}

		Cat(std::string name, std::string breed) {  // this->name from Cat(), name from Cat(std::string name)                 
			this->name = name; 
			this->breed = breed;
	
		}
	private:
		void mew() {  // 메소드
			std::cout << "야옹\n";
		}
		void eat() {
			std::cout << "생선을 먹는다\n";
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

	//Cat c; //  Cat클래스(틀) c객체(변수), c객체는 Cat클래스의 인스턴스, 이 순간에 Cat의 생성자 실행됨.
	//Cat c = Cat();
	//Cat c("나비", "페르시안");
	//Cat c = Cat("나비"); 


	std::cout << c.get_name() << " " << c.get_breed() << std::endl;
	//std::cout << c.name << " " << c.breed << std::endl;


	return 0;
}