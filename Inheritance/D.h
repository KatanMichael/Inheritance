#pragma once 
#ifndef D_h
#define D_h

#include "A.h"


#include <iostream>
using namespace std;

class D : public A
{
private:
	int d;

public:

	void setD(int d);
	int getD();
	void print();
	void printMe();



};

#endif