#include "stdafx.h"
#include "A.h"

#include <iostream>
using namespace std;


int A::getX()
{
	return this-> x;
}

void A::setX(int x)
{
	this->x = x;
}

void A::print()
{
	cout << "A!" << endl;

}

void A::printMe()
{
	cout << "Im A!" << endl;
}
