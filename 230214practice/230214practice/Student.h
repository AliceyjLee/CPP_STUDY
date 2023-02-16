#pragma once
#include<iostream>
#include "Person.h"

using std::string;
using std::cout;
using std::cin;
using std::endl;

#ifndef _STUDENT_H_    
#define _STUDENT_H_ 

class Student : public Person {
	string stu_id;
public:
	~Student();
	void info();
	void test();
};


#endif
