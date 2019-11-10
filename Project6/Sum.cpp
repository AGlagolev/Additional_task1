#include "Sum.h"
#include "Global_var.h"

//–≈јЋ»«ј÷»я ЎјЅЋќЌќ¬ ‘”Ќ ÷»… Sum
// дл€ одномерных масивов
template<typename T>
T Sum(T Arr[], int const n)
{
	T Summ = 0;
	for (int i=0; i < n; i++)
	{
		Summ += Arr[i];
	}
	return(Summ);
}
// дл€ двумерных масивов
template<typename T>
T Sum(T Arr[ROWS][COLS])

{
	T Summ = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			Summ += Arr[i][j];
		}
		
	}
	return(Summ);
}

