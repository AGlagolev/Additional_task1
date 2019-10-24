
#include "Exchange.h"

template<typename T>
void Exchange(T &a, T &b)
{

	
	T buff = a;
	a = b;
	b = buff;
	
}


//void Exchange(double &a, double &b)
//{
//	double buff = a;
//	a = b;
//	b = buff;
//	
//}
//void Exchange(char &a, char &b)
//{
//	char buff = a;
//	a = b;
//	b = buff;
//	
//}
//void Exchange(float &a, float &b)
//{
//	float buff = a;
//	a = b;
//	b = buff;
//	
//}

