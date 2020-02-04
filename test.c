#include "pala.h"

int main() {
	int array[5] = {5, 4, 3, 2, 1};
	pala_sortIntegerArrayWithBubbleSort(array, 5);
	pala_showIntegerArray(array, 5);
	return 0;
}
