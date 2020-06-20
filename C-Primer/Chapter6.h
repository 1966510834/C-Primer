#pragma once
#include<string>
//In this statement
int fact(int val);
int func();

template <typename T>
T abs(T i)
{
	return i > 0 ? i : -1;
}

//6.10:
template <typename T>
void changes(T *a, T *b)
{
	T temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

