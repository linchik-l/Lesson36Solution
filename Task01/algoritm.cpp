#include "algoritm.h"
#include <cmath>

int get_max(int* array, int length) {
	int max = array[0];
	for (int i = 1; i < length; i++)
	{
		if (array[i] > max) {
			max = array[i];
		}
	}
	return max;
}
int get_min(int* array, int length) {
	int min = array[0];
	for (int i = 1; i < length; i++)
	{
		if (array[i] < min) {
			min = array[i];
		}
	}
	return min;
}
double calc_arithmetical_avg(int* array, int length) {
	double sum = 0;
	for (int i = 0; i < length; i++)
	{
		sum += array[i];
	}

	return sum / length;
}
double calc_geometrical_avg(int* array, int length) {
	double p = 1;

	for (int i = 0; i < length; i++)
	{
		p *= array[i];
	}

	return pow(p, 1.0 / length);
}