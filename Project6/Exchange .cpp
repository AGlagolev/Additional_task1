#include "Exchange.h"

void Exchange(int a, int b, int &c, int &d)
{

	
	int buff = a;
	a = b;
	b = buff;
	c = a;
	d = b;
}
void Exchange(double a, double b, double &c, double &d)
{
	double buff = a;
	a = b;
	b = buff;
	c = a;
	d = b;
}
void Exchange(char a, char b, char &c, char &d)
{
	char buff = a;
	a = b;
	b = buff;
	c = a;
	d = b;
}
void Exchange(float a, float b, float &c, float &d)
{
	float buff = a;
	a = b;
	b = buff;
	c = a;
	d = b;
}