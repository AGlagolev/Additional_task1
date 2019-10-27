#pragma once
#include <iostream>
#include "Global_var.h"
////ФУНКЦИЯ Print

template<typename T>                  // Прототип шаблона для одномерного масива
void Print(T Arr[], const int n);    

template<typename T>                  // Прототип шаблона для двумерного масива
void Print(T Arr[ROWS][COLS]);        