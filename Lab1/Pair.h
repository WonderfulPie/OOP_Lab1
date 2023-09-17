#pragma once
#include<iostream>;
using namespace std;
struct Pair
{
	double first;
	int second;

	void Init(double price, int quantity);
	void Read();
	void Display();
	double cost();
};

