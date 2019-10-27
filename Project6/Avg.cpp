#include "Avg.h"
#include "Sum.h"
#include "Global_var.h"

template<typename T>
double Avg(T Arr[], int const n)
{
	T Summ = 0;
	for (int i = 0; i < n; i++)
	{
		Summ += Arr[i];
	}
	return(Summ/n);
}

template<typename T>
double Avg(T Arr[ROWS][COLS])

{
	T Summ = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			Summ += Arr[i][j];
		}

	}
	return(Summ/(ROWS+COLS));
}

