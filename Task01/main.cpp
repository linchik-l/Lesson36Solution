#include "util.h"
#include "algoritm.h"

#define SIZE 20

int main() {
	int array[SIZE]{};

	//cout << "Before array: " << convert(array, SIZE) << endl;
	init(array, SIZE, -10, 10);
	cout << "Array: " << convert(array, SIZE) << endl;

	cout << "Max value of array is " << get_max(array, SIZE) << ".\n";
	cout << "Min value of array is " << get_min(array, SIZE) << ".\n";
	cout << "Arifmetical averange of array is " << calc_arithmetical_avg(array, SIZE) << ".\n";
	cout << "Geometrical averange of array is " << calc_geometrical_avg(array, SIZE) << ".\n";


	return 0;
}