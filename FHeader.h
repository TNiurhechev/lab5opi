#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<iomanip>
#include<Windows.h>
#include<stdio.h>
using namespace std;
void printTheNerds(char s[])
{
	int counter = 0;
	bool printcheck = 0;
	for (int i = 0; i < 20; i++)
	{
		if (s[i] == '5')
		{
			counter++;
		}
		if (counter == 5)
		{
			printcheck = true;
		}
	}
	if (printcheck == true)
	{
		cout << s << " - відмінник!" << endl;;
	}
}
