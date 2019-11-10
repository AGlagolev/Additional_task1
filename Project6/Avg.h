#pragma once
#include "Global_var.h"
#include <string>

using namespace std;

//ПРОТОТИПЫ ФУНКЦИЙ Avg
template<typename T>					// Прототип шаблона для одномерных масивов
double Avg(T Arr[], int const n);
///////////////////////////////////
template<typename T>					// Прототип шаблона для двумерных масивов
double Avg(T Arr[ROWS][COLS]);
///////////////////////////////////
char AvgC(char Prr[], int const nn);    // Прототип ф-ии для одномерных масивов типа char
//////////////////////////////////
char AvgC(char Arr[ROWS][COLS]);		// Прототип ф-ии для двумерных масивов типа char