#pragma once
#include<iostream>
#include "Snack.h"

using std::string;
using std::cout;
using std::cin;
using std::endl;

#ifndef _CANDY_H_    
#define _CANDY_H_ 



class Candy : public Snack {
	string taste;
public:
	Candy(string taste);
	void show_info();
};

#endif