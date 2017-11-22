#pragma once 
#ifndef A_h
#define A_h
class A
{
private:
	int x;

public:

	int getX();
	void setX(int x);
	virtual void print();
	void printMe();
	

};

#endif