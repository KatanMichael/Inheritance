#include "stdafx.h"
#include "B.h"


#include <iostream>
using namespace std;

void B::setB(int b)
{
	this->b = b;
}

int B::getB()
{
	return this->b;
}

void B::print()
{
	cout << "B!" << endl;
}
