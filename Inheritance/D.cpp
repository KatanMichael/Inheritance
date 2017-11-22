#include "stdafx.h"
#include "D.h"

void D::setD(int d)
{
	this->d = d;
}

int D::getD()
{
	return this->d;
}

void D::print()
{
	cout << "D!" << endl;
}

void D::printMe()
{
	cout << "IM D!" << endl;
}
