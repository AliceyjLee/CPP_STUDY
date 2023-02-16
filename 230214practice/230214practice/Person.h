#pragma once
#include<iostream>

using std::string;
using std::cout;
using std::cin;
using std::endl;

#ifndef _PERSON_H_    // if not define : _PERSON_H_�� ���ǵǾ� ���� �ʴٸ�
#define _PERSON_H_    //  _PERSON_H_ �� �����Ѵ�.  endif�� ������ �������� ������ 

class Person {
protected:
	string name;
	static int count; // ��ü ���� ������ ���� �Ҵ���� �ʰ�, ��� ��ü�� ���� ������ ����.
public:
	static void static_method();
	static int get_count();
	Person();
	virtual ~Person();
	virtual void info();
	void set_name(string name);
	string get_name();
};

#endif