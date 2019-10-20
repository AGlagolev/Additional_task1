#pragma once
#include <iostream>
#include "Global_var.h"
////ФУНКЦИЯ Print

template<typename T>
void Print(T Arr[], const int n);    // Массив типа int
//void Print(double Arr[], const int n); // Массив типа double
//void Print(char Arr[], const int n);   // Массив типа char
//void Print(float Arr[], const int n);  // Массив типа float
template<typename T>
void Print(T Arr[ROWS][COLS]);       // Двухмерный массив int
//void Print(double Arr[ROWS][COLS]);    // Двухмерный массив double
//void Print(char Arr[ROWS][COLS]);      // Двухмерный массив char
//void Print(float Arr[ROWS][COLS]);     // Двухмерный массив float