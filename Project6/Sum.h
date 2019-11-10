#pragma once
#include "Global_var.h"
#include <string>

using namespace std;

//ПРОТОТИПЫ ФУНКЦИЙ Sum
template<typename T>					// Прототип шаблона для одномерных масивов
T Sum(T Arr[],int const n);
///////////////////////////
template<typename T>					// Прототип шаблона для двумерных масивов
T Sum(T Arr[ROWS][COLS]);
///////////////////////////
string Suma(char Prr[], int const nn);	// Прототип ф-ии для одномерных масивов типа char
///////////////////////////
string Suma(char Arr[ROWS][COLS]);		// Прототип ф-ии для двумерных масивов типа char