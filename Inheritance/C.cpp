#include "stdafx.h"
#include "C.h"

void C::setC(int c)
{
	this->c = c;
}

int C::getC()
{
	return this->c;
}

void C::print()
{
	cout << "C!" << endl;
}

void C::printMe()
{
	cout << "IM C!" << endl;
}
