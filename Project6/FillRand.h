#pragma once
#include "Global_var.h"
#include <iostream>
////������� FillRand
void FillRand(int Arr[], const int n, int min_val, int max_val);      // ������ ���� int
void FillRand(double Arr[], const int n,int min_val, int max_val);    // ������ ���� double
void FillRand(char Arr[], const int n, int min_val, int max_val);     // ������ ���� char
void FillRand(float Arr[], const int n, int min_val, int max_val);    // ������ ���� float
void FillRand(int Arr[ROWS][COLS], int min_val, int max_val);         // ���������� ������ int
void FillRand(double Arr[ROWS][COLS], int min_val, int max_val);      // ���������� ������ double
void FillRand(char Arr[ROWS][COLS], int min_val, int max_val);        // ���������� ������ char
void FillRand(float Arr[ROWS][COLS], int min_val, int max_val);       // ���������� ������ char