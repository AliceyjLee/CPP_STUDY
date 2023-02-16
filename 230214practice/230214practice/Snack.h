#pragma once
#include<iostream>

using std::string;
using std::cout;
using std::cin;
using std::endl;

#ifndef _SNACK_H_    
#define _SNACK_H_ 


class Snack {
protected:
	string name;
	static int count;
public:
	Snack();
	static int get_count();
	virtual void show_info();
};
#endif