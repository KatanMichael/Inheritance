#pragma once 
#ifndef C_h
#define C_h

#include "B.h";

#include <iostream>
using namespace std;

class C : public B
{
private:
	int c;

public:

	void setC(int c);
	int getC();
	virtual void print();
	void printMe();


};

#endif