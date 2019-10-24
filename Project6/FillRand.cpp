#include "FillRand.h"
////ФУНКЦИЯ FillRand

void FillRand(int Arr[], const int n, int min_val, int max_val)
{
	//Заполнение массива случайными числами:
	int temp = max_val - min_val;
	
	for (int i = 0; i < n; i++)
	{
		Arr[i] = min_val + rand() % temp;
	}
}
////////////////////////// 
void FillRand(double Arr[], const int n, int min_val, int max_val)
{
	//Заполнение массива случайными числами:
    int temp = (max_val - min_val)* 100;

	for (int i = 0; i < n; i++)
	{
		Arr[i] = min_val*100 + rand() % temp;
		Arr[i] /= 100;
	}
}
////////////////////////////////////////
void FillRand(char Arr[], const int n, int min_val, int max_val)
{
	//Заполнение массива случайными числами:
	for (int i = 0; i < n; i++)
	{
		int Num_of_Char;
        int temp = max_val - min_val;
		Num_of_Char = min_val + rand() % temp;
		Arr[i] = (char)Num_of_Char;
	}
}
////////////////////////////////////////
void FillRand(float Arr[], const int n, int min_val, int max_val)
{
	//Заполнение массива случайными числами:
	int temp = (max_val - min_val) * 100;

	for (int i = 0; i < n; i++)
	{
		Arr[i] = min_val * 100 + rand() % temp;
		Arr[i] /= 100;
	}
}
////////////////////////////////////////
void FillRand(int Arr[ROWS][COLS], int min_val, int max_val)
{
 int temp = max_val - min_val;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			Arr[i][j] = min_val + rand() % temp;;
		}
		
	}

}
////////////////////////////////////////
void FillRand(double Arr[ROWS][COLS], int min_val, int max_val)
{
	int temp = (max_val - min_val) * 100;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			Arr[i][j] = min_val * 100 + rand() % temp;
			Arr[i][j] /= 100;
		}

	}
}

///////////////////////////////////////
void FillRand(char Arr[ROWS][COLS], int min_val, int max_val)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			int Num_of_Char;
			int temp = max_val - min_val;
			Num_of_Char = min_val + rand() % temp;
			Arr[i][j] = (char)Num_of_Char;
		}

	}
}
void FillRand(float Arr[ROWS][COLS], int min_val, int max_val)
{
	int temp = (max_val - min_val) * 100;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			Arr[i][j] = min_val * 100 + rand() % temp;
			Arr[i][j] /= 100;
		}

	}
}