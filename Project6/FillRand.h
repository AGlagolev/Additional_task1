#pragma once
#include "Global_var.h"
#include <iostream>
////ФУНКЦИЯ FillRand
void FillRand(int Arr[], const int n, int min_val, int max_val);      // Массив типа int
void FillRand(double Arr[], const int n,int min_val, int max_val);    // Массив типа double
void FillRand(char Arr[], const int n, int min_val, int max_val);     // Массив типа char
void FillRand(float Arr[], const int n, int min_val, int max_val);    // Массив типа float
void FillRand(int Arr[ROWS][COLS], int min_val, int max_val);         // Двухмерный массив int
void FillRand(double Arr[ROWS][COLS], int min_val, int max_val);      // Двухмерный массив double
void FillRand(char Arr[ROWS][COLS], int min_val, int max_val);        // Двухмерный массив char
void FillRand(float Arr[ROWS][COLS], int min_val, int max_val);       // Двухмерный массив char