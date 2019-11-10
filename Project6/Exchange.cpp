#include "Exchange.h"

//–≈¿À»«¿÷»ﬂ ÿ¿¡ÀŒÕ¿ ‘”Õ ÷»… Exchange
template<typename T>
void Exchange(T& a, T& b)
{
	T buff = a;
	a = b;
	b = buff;
}