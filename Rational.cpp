//////////////////////////////////////////////////////////////////////////////
// Rational.cpp
#include "Pair.h"
#include "Rational.h"
#include <iostream>

void Rational::SetP(double first, double second)
{
	p.Init(first, second);
}
Pair Rational::GetP() const { return p; }

void Rational::Display()
{
	cout << "\nFirst = " << p.GetFirst() << endl;
	cout << "Second = " << p.GetSecond() << endl;
}
void Rational::Read()
{
	double x, y;
	cout << "First = "; cin >> x; p.SetFirst(x);
	cout << "Second = "; cin >> y; p.SetSecond(y);
}
string Rational::toString() const
{
	stringstream sout;

	sout << "\nFirst = " << p.GetFirst() << endl;
	sout << "Second = " << p.GetSecond() << endl;

	return sout.str();
}

double Rational::ComparePairs(Pair p1, Pair p2) const
{
	if (p1.GetFirst() > p2.GetFirst() ||
		(p1.GetFirst() == p2.GetFirst() && p1.GetSecond() > p2.GetSecond()))
		return 1;
	if (p1.GetFirst() < p2.GetFirst() ||
		(p1.GetFirst() == p2.GetFirst() && p1.GetSecond() < p2.GetSecond()))
		return 2;
	if (p1.GetFirst() == p2.GetFirst() &&
		p1.GetSecond() == p2.GetSecond())
		return 3;
}
void Rational::ComparePairsResult(int result)
{
	switch (result)
	{
	case 1:
		cout << "\nP1 > P2" << endl;
		break;
	case 2:
		cout << "\nP1 < P2" << endl;
		break;
	case 3:
		cout << "\nP1 = P2" << endl;
		break;
	}
}