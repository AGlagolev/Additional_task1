#pragma once
#include "Global_var.h"
#include <string>

using namespace std;

template<typename T>
double Avg(T Arr[], int const n);

template<typename T>
double Avg(T Arr[ROWS][COLS]);

char AvgC(char Prr[], int const nn);

char AvgC(char Arr[ROWS][COLS]);