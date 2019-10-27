#include "Avg.h"
#include "Sum.h"
#include "Global_var.h"

char AvgC(char Prr[], int const nn)
{
	int Summ = 0;
	for (int i = 0; i < nn; i++)
	{
		Summ += (int)Prr[i];
	}
	return((char)(Summ/nn));
}

char AvgC(char Arr[ROWS][COLS])

{
	int Summ = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			Summ += (int)Arr[i][j];
		}

	}
	return((char)(Summ / (ROWS+COLS)));
}
