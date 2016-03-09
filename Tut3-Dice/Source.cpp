// The .cpp code which simulates the dice

#include<iostream>
#include"dice.h"
#include<cstdlib>
using namespace std;

int Dice::roll()
{
	result = rand() % 6 + 1;
	return result;                                // Print the result
}
float Dice::average(Dice dice1, int numRolls)
{
	int i, sum = 0, temp;
	for (i = 0; i < numRolls; i++)
	{
		temp = dice1.roll;
		sum = sum + temp;
	}
	return (sum / numRolls);
}
float Dice::average(int array[], int numInt)
{
	int i, sum = 0;
	for (i = 0; i < numInt; i++)
	{
		sum = sum + array[i];
	}
	return (sum / numInt);
}
