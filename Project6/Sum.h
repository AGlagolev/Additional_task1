#pragma once
#include "Global_var.h"
#include <string>

using namespace std;

//��������� ������� Sum
template<typename T>					// �������� ������� ��� ���������� �������
T Sum(T Arr[],int const n);
///////////////////////////
template<typename T>					// �������� ������� ��� ��������� �������
T Sum(T Arr[ROWS][COLS]);
///////////////////////////
string Suma(char Prr[], int const nn);	// �������� �-�� ��� ���������� ������� ���� char
///////////////////////////
string Suma(char Arr[ROWS][COLS]);		// �������� �-�� ��� ��������� ������� ���� char