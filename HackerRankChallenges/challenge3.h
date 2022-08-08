#pragma once

#include <iostream>
#include <cstdio>
using namespace std;

void challenge3() {
	struct values {
		int intValue = 0;
		long longValue = 0;
		char charValue = ' ';
		float floatValue = 0.0;
		double doubleValue = 0.0;
	};

	values theValues;

	int result = scanf("%d %ld %c %f %lf", &theValues.intValue, &theValues.longValue, &theValues.charValue, &theValues.floatValue, &theValues.doubleValue);

	int index = 0;
	printf("%d\n", theValues.intValue);
	printf("%ld\n", theValues.longValue);
	printf("%c\n", theValues.charValue);
	printf("%.*f\n", 3, theValues.floatValue);
	printf("%lf\n", theValues.doubleValue);
}