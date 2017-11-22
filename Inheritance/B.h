#pragma once 
#ifndef B_h
#define B_h

#include "A.h";


class B : public A
{
private:
	int b;

public:
	void setB(int b);
	int getB();
	virtual void print();

};

#endif