#pragma once
#include<iostream>
#include "Snack.h"

using std::string;
using std::cout;
using std::cin;
using std::endl;

#ifndef _CHOCOLATE_H_    
#define _CHOCOLATE_H_ 

class Chocolate : public Snack {
	string shape;
public:
	Chocolate(string shape);
	void show_info();
};

#endif