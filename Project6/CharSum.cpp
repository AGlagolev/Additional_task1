#include "Sum.h"
#include "Global_var.h"


//���������� �������� ������� Sum
// ��� ���������� ������� char
string Suma(char Prr[], int const nn)
{
	string Summ = "";
	for (int i = 0; i < nn; i++)
	{
		Summ += Prr[i];
	}
	return(Summ);
}
// ��� ��������� ������� char
string Suma(char Arr[ROWS][COLS])

{
	string Summ = "";
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			Summ += Arr[i][j];
		}

	}
	return(Summ);
}
