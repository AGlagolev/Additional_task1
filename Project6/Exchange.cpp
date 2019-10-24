#include "Exchange.h"

template<typename T>
void Exchange(T& a, T& b)
{
	T buff = a;
	a = b;
	b = buff;
}