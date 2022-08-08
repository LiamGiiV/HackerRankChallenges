#pragma once

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void challenge2() {
	int accumulator = 0;
	for (int i = 0; i < 3; i++)
	{
		int temp = 0;
		cin >> temp;
		accumulator += temp;
	}
	cout << accumulator;
}