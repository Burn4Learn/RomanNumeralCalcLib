/*
 * romanError.c
 *
 *  Created on: Oct 1, 2016
 *      Author: brad
 */
#include <stdio.h>
#include <errno.h>
#include <string.h>
#include <stdlib.h>
#include "romanError.h"

void showBadCharMessage(char value)
{
	printf("Invalid Roman Numeral char '%c' ", value);
	fflush(stdout);
}

void showBadNumeralPairMessage(char a, char b)
{
	printf("Invalid Roman numeral pair '%c%c' ", a, b);
	fflush(stdout);
}

void showBadNumeralStringMessage(char* value)
{
	printf("in the string '%s'.\n", value);
}

void showTermExceedsMaximumValueMessage(char *value)
{
	printf("Numeral string '%s' exceeds maximum allowable value of 3999.\n", value);
}

void showSumExceedsMaximumValueMessage()
{
	printf("Error. Addition results in sum that exceeds maximum allowable value of 3999.\n");
}

void showTermNullMessage(char term)
{
	printf("Error. Term %c null.\n", term);
}

void showNonValidSubtractionResultMessage()
{
	printf("Error. Subtraction results are not a valid Roman numeral (negative or zero).\n");
}

void showExceedsMaximumAllowableFrequencyMessage(char *value)
{
	printf("Error. Numeral string '%s'exceeds maximum allowable sequential count for single character type.\n", value);
}
