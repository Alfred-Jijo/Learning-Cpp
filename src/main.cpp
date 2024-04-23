#include <typedef.h>
#include <stb_ds.h>
#include <iostream>
#include <macros.h>
#include <cstddef>


int main() {

	int arr[] = { 1, 2, 3, 4, 1 };
	constexpr size_t arr_size = array_size(arr);

	std::cout << arr_size << std::endl;
	return 0;
}
