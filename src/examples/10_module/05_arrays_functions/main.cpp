#include "arr_functions.h"

using std::cout;

int main() 
{
	int times_table[ROWS][COLS];

	populate_times_table(times_table, ROWS);

	display_times_table(times_table, ROWS);

	int nums[ROWS]{};
	display_array(nums, ROWS);

	return 0;
}