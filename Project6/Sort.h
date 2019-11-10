#pragma once
#include "Global_var.h"
#include "Exchange.h"

//ПРОТОТИПЫ ФУНКЦИЙ Sort
template<typename T>					// Прототип шаблона для одномерного масива
void Sort(T Arr[], const int n);     
//////////////////////////////////
template<typename T>					// Прототип шаблона для двумерного масива
void Sort(T Arr[ROWS][COLS]);        