#pragma once
#include <iostream>
#include "Global_var.h"
////������� Print

template<typename T>
void Print(T Arr[], const int n);    // ������ ���� int
//void Print(double Arr[], const int n); // ������ ���� double
//void Print(char Arr[], const int n);   // ������ ���� char
//void Print(float Arr[], const int n);  // ������ ���� float
template<typename T>
void Print(T Arr[ROWS][COLS]);       // ���������� ������ int
//void Print(double Arr[ROWS][COLS]);    // ���������� ������ double
//void Print(char Arr[ROWS][COLS]);      // ���������� ������ char
//void Print(float Arr[ROWS][COLS]);     // ���������� ������ float