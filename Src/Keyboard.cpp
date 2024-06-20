#include <iostream>
#include "RAM.h"

void get_input(int numbers[])
{	// Ввод элементов в BUFFER с клавиатуры
	int number;
	for (int i = 0; i < 8; ++i)
	{
		std::cout << "Enter " << i + 1 << "'s item: ";
		std::cin >> number;
		ram_write(numbers, number, i);
	}
}